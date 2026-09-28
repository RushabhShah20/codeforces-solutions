// Problem: Kuriyama Mirai's Stones
// Link to the problem: https://codeforces.com/contest/433/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b = a;
    sort(b.begin(), b.end());
    vector<ll> c(n + 1, 0), d(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        c[i + 1] = c[i] + a[i];
        d[i + 1] = d[i] + b[i];
    }
    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll x, l, r;
        cin >> x >> l >> r;
        const ll ans = x == 1 ? c[r] - c[l - 1] : d[r] - d[l - 1];
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