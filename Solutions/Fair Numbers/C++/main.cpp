// Problem: Fair Numbers
// Link to the problem: https://codeforces.com/contest/1411/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isFair(const ll n)
{
    ll m = n;
    while (m != 0)
    {
        const ll x = m % 10;
        if (x != 0 && n % x != 0)
        {
            return false;
        }
        m /= 10;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    while (!isFair(n))
    {
        n++;
    }
    cout << n << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}