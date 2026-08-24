// Problem: Table
// Link to the problem: https://codeforces.com/contest/359/problem/A
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
    for (ll i = 0; i < n; i++)
    {
        if (a[i][0] == 1 || a[i][m - 1] == 1)
        {
            cout << 2 << endl;
            return;
        }
    }
    for (ll j = 0; j < m; j++)
    {
        if (a[0][j] == 1 || a[n - 1][j] == 1)
        {
            cout << 2 << endl;
            return;
        }
    }
    cout << 4 << endl;
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