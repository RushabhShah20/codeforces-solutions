// Problem: Land Lot
// Link to the problem: https://codeforces.com/contest/48/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll x, y;
    cin >> x >> y;
    ll ans = m * n;
    if (x <= n && y <= m)
    {
        for (ll i = 0; i <= n - x; i++)
        {
            for (ll j = 0; j <= m - y; j++)
            {
                ll z = 0;
                for (ll r = i; r < i + x; r++)
                {
                    for (ll c = j; c < j + y; c++)
                    {
                        z += a[r][c];
                    }
                }
                ans = min(ans, z);
            }
        }
    }
    if (y <= n && x <= m)
    {
        for (ll i = 0; i <= n - y; i++)
        {
            for (ll j = 0; j <= m - x; j++)
            {
                ll z = 0;
                for (ll r = i; r < i + y; r++)
                {
                    for (ll c = j; c < j + x; c++)
                    {
                        z += a[r][c];
                    }
                }
                ans = min(ans, z);
            }
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