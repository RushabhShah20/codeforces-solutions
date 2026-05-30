// Problem: Brogramming Contest
// Link to the problem: https://codeforces.com/contest/2064/problem/A
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
    ll ans = 0;
    bool x = true;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (!x)
            {
                x = true;
                ans++;
            }
        }
        else
        {
            if (x)
            {
                x = false;
                ans++;
            }
        }
    }
    cout << ans << endl;
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