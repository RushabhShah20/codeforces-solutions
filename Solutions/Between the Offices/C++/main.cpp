// Problem: Between the Offices
// Link to the problem: https://codeforces.com/contest/867/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll x = 0, y = 0;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == 'S' && s[i - 1] == 'F')
        {
            x++;
        }
        if (s[i] == 'F' && s[i - 1] == 'S')
        {
            y++;
        }
    }
    if (y > x)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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