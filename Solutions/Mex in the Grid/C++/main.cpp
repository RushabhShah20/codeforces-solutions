// Problem: Mex in the Grid
// Link to the problem: https://codeforces.com/contest/2102/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> ans(n, vector<ll>(n));
    ll x = n * n - 1;
    ll l = 0, r = n - 1, u = 0, d = n - 1;
    while (l <= r && u <= d)
    {
        for (ll i = l; i <= r; i++)
        {
            ans[u][i] = x;
            x--;
        }
        u++;
        for (ll i = u; i <= d; i++)
        {
            ans[i][r] = x;
            x--;
        }
        r--;
        if (u <= d)
        {
            for (ll i = r; i >= l; i--)
            {
                ans[d][i] = x;
                x--;
            }
            d--;
        }
        if (l <= r)
        {
            for (ll i = d; i >= u; i--)
            {
                ans[i][l] = x;
                x--;
            }
            l++;
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