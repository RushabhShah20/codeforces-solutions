// Problem: The Great Hero
// Link to the problem: https://codeforces.com/contest/1480/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, n;
    cin >> x >> y >> n;
    vector<ll> a(n), b(n);
    vector<pair<ll, ll>> c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        c[i] = {a[i], b[i]};
    }
    sort(c.begin(), c.end());
    for (ll i = 0; i < n; i++)
    {
        y -= c[i].first * ((c[i].second + x - 1) / x);
    }
    const string ans = y + c[n - 1].first > 0 ? "YES" : "NO";
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