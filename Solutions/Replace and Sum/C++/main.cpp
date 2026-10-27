// Problem: Replace and Sum
// Link to the problem: https://codeforces.com/contest/2193/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    a[n - 1] = max(a[n - 1], b[n - 1]);
    for (ll i = n - 2; i >= 0; i--)
    {
        a[i] = max({a[i], b[i], a[i + 1]});
    }
    vector<ll> c(n + 1);
    for (ll i = 0; i < n; i++)
    {
        c[i + 1] = c[i] + a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        ll l, r;
        cin >> l >> r;
        const ll ans = c[r] - c[l - 1];
        cout << ans << " ";
    }
    cout << endl;
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