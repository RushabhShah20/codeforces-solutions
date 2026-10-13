// Problem: Not Adjacent Matrix
// Link to the problem: https://codeforces.com/contest/1520/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }
    vector<vector<ll>> ans(n, vector<ll>(n));
    ll x = 0, y = 0;
    for (ll i = 1; i <= n * n; i += 2)
    {
        ans[x][y] = i;
        y++;
        if (y == n)
        {
            y = 0;
            x++;
        }
    }
    for (ll i = 2; i <= n * n; i += 2)
    {
        ans[x][y] = i;
        y++;
        if (y == n)
        {
            y = 0;
            x++;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
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