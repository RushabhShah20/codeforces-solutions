// Problem: Books Exchange (easy version)
// Link to the problem: https://codeforces.com/contest/1249/problem/B1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

class DisjointSet
{
public:
    vector<ll> parent, size;
    DisjointSet(const ll n)
    {
        parent.resize(n);
        size.resize(n);
        for (ll i = 0; i < n; i++)
        {
            parent[i] = i;
            size[i] = 1;
        }
    }

    ll find(const ll node)
    {
        if (parent[node] == node)
        {
            return node;
        }
        return parent[node] = find(parent[node]);
    }

    bool unionBySize(const ll u, const ll v)
    {
        const ll pu = find(u), pv = find(v);
        if (pu == pv)
        {
            return false;
        }
        if (size[pu] > size[pv])
        {
            size[pu] += size[pv];
            parent[pv] = pu;
        }
        else
        {
            size[pv] += size[pu];
            parent[pu] = pv;
        }
        return true;
    }
};

void solve()
{
    ll n;
    cin >> n;
    DisjointSet dsu(n + 1);
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        dsu.unionBySize(i, a[i]);
    }
    for (ll i = 1; i <= n; i++)
    {
        const ll ans = dsu.size[dsu.find(i)];
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