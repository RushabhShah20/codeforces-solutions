// Problem: Zoning Restrictions Again
// Link to the problem: https://codeforces.com/contest/1162/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, h, m;
    cin >> n >> h >> m;
    vector<ll> a(n, h);
    for (ll i = 0; i < m; i++)
    {
        ll l, r, x;
        cin >> l >> r >> x;
        for (ll j = l - 1; j <= r - 1; j++)
        {
            a[j] = min(a[j], x);
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += a[i] * a[i];
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
    solve();
    return 0;
}