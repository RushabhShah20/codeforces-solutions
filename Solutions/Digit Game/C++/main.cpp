// Problem: Digit Game
// Link to the problem: https://codeforces.com/contest/1419/problem/A
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
    if (n & 1)
    {
        bool x = false;
        for (ll i = 0; i < n; i += 2)
        {
            if (s[i] - '0' & 1)
            {
                x = true;
                break;
            }
        }
        const ll ans = x ? 1 : 2;
        cout << ans << endl;
    }
    else
    {
        bool x = false;
        for (ll i = 1; i < n; i += 2)
        {
            if (!(s[i] - '0' & 1))
            {
                x = true;
                break;
            }
        }
        const ll ans = x ? 2 : 1;
        cout << ans << endl;
    }
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