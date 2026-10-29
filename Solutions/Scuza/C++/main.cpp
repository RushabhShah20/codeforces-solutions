// Problem: Scuza
// Link to the problem: https://codeforces.com/contest/1742/problem/E
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n + 1), b(n);
    ll mx = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        a[i] += a[i - 1] + x;
        mx = max(mx, x);
        b[i - 1] = mx;
    }
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        const ll ans = a[upper_bound(b.begin(), b.end(), x) - b.begin()];
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