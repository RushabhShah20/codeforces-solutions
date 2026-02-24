// Problem: Game 23
// Link to the problem: https://codeforces.com/contest/1141/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a = 0, b = 0, c = 0, d = 0;
    while (n % 2 == 0)
    {
        a++;
        n /= 2;
    }
    while (n % 3 == 0)
    {
        b++;
        n /= 3;
    }
    while (m % 2 == 0)
    {
        c++;
        m /= 2;
    }
    while (m % 3 == 0)
    {
        d++;
        m /= 3;
    }
    if (n == m)
    {
        if (c >= a && d >= b)
        {
            cout << c - a + d - b << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}