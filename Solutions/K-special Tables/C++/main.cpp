// Problem: K-special Tables
// Link to the problem: https://codeforces.com/contest/625/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> ans(n, vector<ll>(n));
    ll x = 1;
    for (ll j = 0; j < n; j++)
    {
        for (ll i = 0; i < k - 1; i++)
        {
            ans[j][i] = x;
            x++;
        }
    }
    for (ll j = 0; j < n; j++)
    {
        for (ll i = k - 1; i < n; i++)
        {
            ans[j][i] = x;
            x++;
        }
    }
    ll y = 0;
    for (ll i = 0; i < n; i++)
    {
        y += ans[i][k - 1];
    }
    cout << y << endl;
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