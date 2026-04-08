// Problem: Magic Odd Square
// Link to the problem: https://codeforces.com/contest/710/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 1, y = 2;
    vector<vector<ll>> ans(n, vector<ll>(n));
    for (ll i = 0; i < n / 2; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (j >= n / 2 - i && j <= n / 2 + i)
            {
                ans[i][j] = x;
                x += 2;
                ans[n - 1 - i][j] = x;
                x += 2;
            }
            else
            {
                ans[i][j] = y;
                y += 2;
                ans[n - 1 - i][j] = y;
                y += 2;
            }
        }
    }
    for (ll j = 0; j < n; j++)
    {
        ans[n / 2][j] = x;
        x += 2;
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