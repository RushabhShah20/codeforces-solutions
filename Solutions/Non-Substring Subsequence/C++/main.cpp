// Problem: Non-Substring Subsequence
// Link to the problem: https://codeforces.com/contest/1451/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    for (ll i = 0; i < m; i++)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        bool x = false;
        for (ll j = 0; j < l; j++)
        {
            if (s[j] == s[l])
            {
                x = true;
                break;
            }
        }
        for (ll j = r + 1; j < n; j++)
        {
            if (s[j] == s[r])
            {
                x = true;
                break;
            }
        }
        const string ans = x ? "YES" : "NO";
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