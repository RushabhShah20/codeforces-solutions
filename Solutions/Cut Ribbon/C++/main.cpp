// Problem: Cut Ribbon
// Link to the problem: https://codeforces.com/contest/189/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<ll> dp(n + 1, -1e9);
    dp[0] = 0;
    ll lengths[3] = {a, b, c};
    for (ll i = 1; i <= n; i++)
    {
        for (const ll length : lengths)
        {
            if (i >= length)
            {
                dp[i] = max(dp[i], dp[i - length] + 1);
            }
        }
    }
    const ll ans = dp[n];
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