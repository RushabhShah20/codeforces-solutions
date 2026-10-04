// Problem: Network Topology
// Link to the problem: https://codeforces.com/contest/292/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        a[u - 1]++;
        a[v - 1]++;
    }
    ll x = 0, y = 0, z = 0, w = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            x++;
        }
        else if (a[i] == 2)
        {
            y++;
        }
        else if (a[i] == n - 1)
        {
            z++;
        }
        else
        {
            w++;
        }
    }
    if (z == 1 && x == n - 1 && w == 0)
    {
        cout << "star topology" << endl;
    }
    else if (y == n && w == 0)
    {
        cout << "ring topology" << endl;
    }
    else if (y == n - 2 && x == 2 && w == 0)
    {
        cout << "bus topology" << endl;
    }
    else
    {
        cout << "unknown topology" << endl;
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