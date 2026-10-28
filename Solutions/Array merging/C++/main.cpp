// Problem: Array merging
// Link to the problem: https://codeforces.com/contest/1831/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    const ll m = (n << 1) + 1;
    vector<ll> c(m), d(m);
    ll x = 1;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            x++;
        }
        else
        {
            x = 1;
        }
        c[a[i - 1]] = max(c[a[i - 1]], x);
    }
    c[a[n - 1]] = max(c[a[n - 1]], x);
    x = 1;
    for (ll i = 1; i < n; i++)
    {
        if (b[i] == b[i - 1])
        {
            x++;
        }
        else
        {
            x = 1;
        }
        d[b[i - 1]] = max(d[b[i - 1]], x);
    }
    d[b[n - 1]] = max(d[b[n - 1]], x);
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        ans = max(ans, c[i] + d[i]);
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