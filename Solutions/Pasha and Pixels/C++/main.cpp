// Problem: Pasha and Pixels
// Link to the problem: https://codeforces.com/contest/508/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool check(const ll n, const ll m, const ll x, const ll y, const vector<vector<bool>> &z)
{
    if (x > 0 && y > 0)
    {
        if (z[x][y] && z[x - 1][y] && z[x][y - 1] && z[x - 1][y - 1])
        {
            return true;
        }
    }
    if (x > 0 && y < m - 1)
    {
        if (z[x][y] && z[x - 1][y] && z[x][y + 1] && z[x - 1][y + 1])
        {
            return true;
        }
    }
    if (x < n - 1 && y > 0)
    {
        if (z[x][y] && z[x + 1][y] && z[x][y - 1] && z[x + 1][y - 1])
        {
            return true;
        }
    }
    if (x < n - 1 && y < m - 1)
    {
        if (z[x][y] && z[x + 1][y] && z[x][y + 1] && z[x + 1][y + 1])
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<pair<ll, ll>> a(k);
    for (ll i = 0; i < k; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    vector<vector<bool>> z(n, vector<bool>(m, false));
    for (ll i = 0; i < k; i++)
    {
        z[a[i].first - 1][a[i].second - 1] = true;
        if (check(n, m, a[i].first - 1, a[i].second - 1, z))
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << 0 << endl;
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