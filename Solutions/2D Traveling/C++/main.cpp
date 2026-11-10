// Problem: 2D Traveling
// Link to the problem: https://codeforces.com/contest/1869/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<ll> x(n + 1), y(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
    }
    ll ans = abs(x[a] - x[b]) + abs(y[a] - y[b]);
    ll c = 1e18, d = 1e18;
    for (ll i = 1; i <= k; i++)
    {
        c = min(c, abs(x[a] - x[i]) + abs(y[a] - y[i]));
        d = min(d, abs(x[b] - x[i]) + abs(y[b] - y[i]));
    }
    ans = min(ans, c + d);
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