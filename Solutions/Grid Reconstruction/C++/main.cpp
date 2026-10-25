// Problem: Grid Reconstruction
// Link to the problem: https://codeforces.com/contest/1816/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> ans(2, vector<ll>(n));
    ans[0][0] = (n << 1) - 1;
    ans[1][n - 1] = n << 1;
    ll x = 1, y = (n - 1) << 1;
    for (ll i = 1; i < n; i++)
    {
        if (i & 1)
        {
            ans[1][i - 1] = x;
            x++;
            ans[0][i] = x;
            x++;
        }
        else
        {
            ans[0][i] = y;
            y--;
            ans[1][i - 1] = y;
            y--;
        }
    }
    for (ll i = 0; i < 2; i++)
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