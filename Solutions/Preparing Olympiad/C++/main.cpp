// Problem: Preparing Olympiad
// Link to the problem: https://codeforces.com/contest/550/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (ll i = 0; i < (1LL << n); i++)
    {
        ll mn = LLONG_MAX, mx = LLONG_MIN, y = 0, z = 0;
        for (ll j = 0; j < n; j++)
        {
            if ((i >> j) & 1)
            {
                y += a[j];
                mx = max(mx, a[j]);
                mn = min(mn, a[j]);
                z++;
            }
        }
        if (z >= 2 && y >= l && y <= r && (mx - mn) >= x)
        {
            ans++;
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
    solve();
    return 0;
}