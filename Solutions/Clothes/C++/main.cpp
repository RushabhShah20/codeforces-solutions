// Problem: Clothes
// Link to the problem: https://codeforces.com/contest/102/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<vector<bool>> adj(n + 1, vector<bool>(n + 1, false));
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u][v] = true;
        adj[v][u] = true;
    }
    ll ans = -1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i + 1; j <= n; j++)
        {
            if (!adj[i][j])
            {
                continue;
            }
            for (ll k = j + 1; k <= n; k++)
            {
                if (adj[i][k] && adj[j][k])
                {
                    const ll x = a[i] + a[j] + a[k];
                    if (ans == -1 || x < ans)
                    {
                        ans = x;
                    }
                }
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