// Problem: Love Song
// Link to the problem: https://codeforces.com/contest/1539/problem/B
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
    vector<vector<ll>> dp(n + 1, vector<ll>(26, 0));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 26; j++)
        {
            if (s[i] - 'a' == j)
            {
                dp[i + 1][j] = dp[i][j] + 1;
            }
            else
            {
                dp[i + 1][j] = dp[i][j];
            }
        }
    }
    for (ll i = 0; i < m; i++)
    {
        ll l, r;
        cin >> l >> r;
        ll ans = 0;
        for (ll j = 0; j < 26; j++)
        {
            ans += (j + 1) * (dp[r][j] - dp[l - 1][j]);
        }
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
    solve();
    return 0;
}