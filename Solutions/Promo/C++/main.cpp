// Problem: Promo
// Link to the problem: https://codeforces.com/contest/1697/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), p(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++)
    {
        p[i + 1] = p[i] + a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        const ll ans = p[n - x + y] - p[n - x];
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