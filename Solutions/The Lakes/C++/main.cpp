// Problem: The Lakes
// Link to the problem: https://codeforces.com/contest/10/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

long long dfs(const ll x, const ll y, const ll n, const ll m, vector<vector<ll>> &grid)
{
    long long z = grid[x][y];
    grid[x][y] = 0;
    const vector<ll> a = {-1, 0, 1, 0}, b = {0, 1, 0, -1};
    for (ll i = 0; i < 4; i++)
    {
        const ll c = x + a[i], d = y + b[i];
        if (c >= 0 && c < n && d >= 0 && d < m && grid[c][d] > 0)
        {
            z += dfs(c, d, n, m, grid);
        }
    }
    return z;
}

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
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (a[i][j] > 0)
            {
                ans = max(ans, dfs(i, j, n, m, a));
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}