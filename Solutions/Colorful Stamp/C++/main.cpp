// Problem: Colorful Stamp
// Link to the problem: https://codeforces.com/contest/1669/problem/D
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
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            x++;
        }
        else if (s[i] == 'B')
        {
            y++;
        }
        else
        {
            if ((x == 0) != (y == 0))
            {
                cout << "NO" << endl;
                return;
            }
            x = 0;
            y = 0;
        }
    }
    if ((x == 0) != (y == 0))
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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