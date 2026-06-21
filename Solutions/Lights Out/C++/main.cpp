// Problem: Lights Out
// Link to the problem: https://codeforces.com/contest/275/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<vector<ll>> ans(3, vector<ll>(3, 1));
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            ll x;
            cin >> x;
            if (x & 1)
            {
                ans[i][j] = 1 - ans[i][j];
                if (i != 0)
                {
                    ans[i - 1][j] = 1 - ans[i - 1][j];
                }
                if (i != 2)
                {
                    ans[i + 1][j] = 1 - ans[i + 1][j];
                }
                if (j != 0)
                {
                    ans[i][j - 1] = 1 - ans[i][j - 1];
                }
                if (j != 2)
                {
                    ans[i][j + 1] = 1 - ans[i][j + 1];
                }
            }
        }
    }
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            cout << ans[i][j];
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