// Problem: Dijkstra?
// Link to the problem: https://codeforces.com/contest/20/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

vector<pair<ll, ll>> adj[100001];
ll dist[100001];
ll parent[100001];

void dijkstra(ll s, const ll n)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<>> pq;
    for (int i = 1; i <= n; i++)
    {
        dist[i] = 1e18;
    }
    dist[s] = 0;
    pq.push({0, s});
    while (!pq.empty())
    {
        const ll d = pq.top().first, u = pq.top().second;
        pq.pop();
        if (d > dist[u])
        {
            continue;
        }
        for (const pair<ll, ll> edge : adj[u])
        {
            const ll v = edge.first, w = edge.second;
            if (dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                parent[v] = u;
                pq.push({dist[v], v});
            }
        }
    }
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    dijkstra(1, n);
    if (dist[n] == 1e18)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<ll> ans;
        for (ll v = n; v != 0; v = parent[v])
        {
            ans.push_back(v);
        }
        reverse(ans.begin(), ans.end());
        for (const ll node : ans)
        {
            cout << node << " ";
        }
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