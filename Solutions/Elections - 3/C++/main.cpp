// Problem: Elections
// Link to the problem: https://codeforces.com/contest/570/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(m + 1, vector<ll>(n));
    for (ll i = 1; i <= m; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<ll> b(n + 1);
    for (ll i = 1; i <= m; i++)
    {
        ll x = 0;
        for (ll j = 0; j < n; j++)
        {
            if (a[i][j] > a[i][x])
            {
                x = j;
            }
        }
        b[x + 1]++;
    }
    ll y = 0;
    for (ll i = 1; i <= n; i++)
    {
        y = max(y, b[i]);
    }
    for (ll i = 1; i <= n; i++)
    {
        if (b[i] == y)
        {
            cout << i << endl;
            return;
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