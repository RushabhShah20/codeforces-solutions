// Problem: Prime Square
// Link to the problem: https://codeforces.com/contest/1436/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> ans(n, vector<ll>(n, 0));
    for (ll i = 0; i < n; i++)
    {
        ans[i][i] = 1;
        ans[i][n - 1 - i] = 1;
    }
    if (n > 1 && n & 1)
    {
        const ll m = n / 2;
        ans[m - 1][m] = 1;
        ans[m + 1][m] = 1;
        ans[m][m - 1] = 1;
        ans[m][m + 1] = 1;
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