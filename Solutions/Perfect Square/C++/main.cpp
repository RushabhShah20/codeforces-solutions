// Problem: Perfect Square
// Link to the problem: https://codeforces.com/contest/1881/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    const ll m = n >> 1;
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            const ll a = s[i][j], b = s[n - 1 - j][i], c = s[j][n - 1 - i], d = s[n - 1 - i][n - 1 - j], mx = max({a, b, c, d});
            ans += 4 * mx - (a + b + c + d);
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