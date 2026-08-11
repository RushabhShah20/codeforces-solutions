// Problem: Three Sons
// Link to the problem: https://codeforces.com/contest/120/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            a[i] += x;
            b[j] += x;
        }
    }
    vector<ll> c(3);
    for (ll i = 0; i < 3; i++)
    {
        cin >> c[i];
    }
    sort(c.begin(), c.end());
    for (ll i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    for (ll i = 1; i < m; i++)
    {
        b[i] += b[i - 1];
    }
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            vector<ll> d = {a[i - 1], a[j - 1] - a[i - 1], a[n - 1] - a[j - 1]};
            sort(d.begin(), d.end());
            ans += c == d ? 1 : 0;
        }
    }
    for (ll i = 1; i < m; i++)
    {
        for (ll j = i + 1; j < m; j++)
        {
            vector<ll> d = {b[i - 1], b[j - 1] - b[i - 1], b[m - 1] - b[j - 1]};
            sort(d.begin(), d.end());
            ans += c == d ? 1 : 0;
        }
    }
    cout << ans << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}