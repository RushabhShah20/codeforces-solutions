// Problem: Candy Bags
// Link to the problem: https://codeforces.com/contest/334/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> ans(n, vector<ll>(n));
    ll x = 1;
    for (ll j = 0; j < n; j++)
    {
        if (j & 1)
        {
            for (ll i = n - 1; i >= 0; i--)
            {
                ans[i][j] = x;
                x++;
            }
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                ans[i][j] = x;
                x++;
            }
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
    solve();
    return 0;
}