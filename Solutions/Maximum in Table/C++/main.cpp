// Problem: Maximum in Table
// Link to the problem: https://codeforces.com/contest/509/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> dp(n, vector<ll>(n));
    for (ll i = 0; i < n; i++)
    {
        dp[i][0] = 1;
        dp[0][i] = 1;
    }
    for (ll i = 1; i < n; i++)
    {
        for (ll j = 1; j < n; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    const ll ans = dp[n - 1][n - 1];
    cout << ans << endl;
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