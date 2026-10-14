// Problem: Badge
// Link to the problem: https://codeforces.com/contest/1020/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll bfs(const ll u, vector<bool> &vis, const vector<vector<ll>> &adj)
{
    ll v = 0;
    queue<ll> q;
    q.push(u);
    vis[u] = true;
    while (!q.empty())
    {
        const ll x = q.front();
        q.pop();
        for (ll i = 0; i < adj[x].size(); i++)
        {
            v = adj[x][i];
            if (!vis[v])
            {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    return v;
}

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> adj(n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        adj[i].push_back(x - 1);
    }
    for (ll i = 0; i < n; i++)
    {
        vector<bool> vis(n, false);
        const ll ans = bfs(i, vis, adj) + 1;
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
    solve();
    return 0;
}