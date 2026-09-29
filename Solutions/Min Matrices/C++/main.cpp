// Problem: Min Matrices
// Link to the problem: https://codeforces.com/contest/2263/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    const ll x = k - n + 1;
    if (x >= 1 && x <= n)
    {
        vector<vector<ll>> ans(n, vector<ll>(n, 0));
        ll y = 1;
        for (ll i = 0; i < x; i++)
        {
            ans[0][i] = y;
            y++;
        }
        for (ll i = 1; i < x; i++)
        {
            ans[i][0] = y;
            y++;
        }
        for (ll i = x; i < n; i++)
        {
            ans[i][i] = y;
            y++;
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (ans[i][j] == 0)
                {
                    ans[i][j] = y;
                    y++;
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
    else
    {
        cout << -1 << endl;
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