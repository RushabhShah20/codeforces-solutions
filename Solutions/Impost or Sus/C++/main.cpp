// Problem: Impost or Sus
// Link to the problem: https://codeforces.com/contest/2178/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    vector<ll> dp(n, LLONG_MAX);
    dp[0] = ((s[0] == 'u') ? (1) : (0));
    if (n > 1)
    {
        dp[1] = dp[0] + ((s[1] == 'u') ? (1) : (0));
    }
    for (int i = 2; i < n; i++)
    {
        int x = (s[i] == 'u') ? (1) : (0);
        dp[i] = min(dp[i], dp[i - 1] + x);
        if (s[i - 1] == 'u')
        {
            dp[i] = min(dp[i], dp[i - 2] + x);
        }
    }
    const ll ans = dp[n - 1];
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}