// Problem: Start of the season
// Link to the problem: https://codeforces.com/contest/12/problem/E
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> ans(n, vector<ll>(n));
    const ll m = n - 1;
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (i == j)
            {
                ans[i][j] = 0;
            }
            else
            {
                ans[i][j] = (i + j) % m + 1;
            }
        }
        const ll x = (2 * i) % m + 1;
        ans[i][m] = ans[m][i] = x;
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
    solve();
    return 0;
}