// Problem: Parliament of Berland
// Link to the problem: https://codeforces.com/contest/644/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    if (n > x * y)
    {
        cout << -1 << endl;
        return;
    }
    vector<vector<ll>> ans(x, vector<ll>(y, 0));
    ll z = 1;
    for (ll i = 0; i < x; i++)
    {
        if (z > n)
        {
            break;
        }
        for (ll j = 0; j < y; j++)
        {
            if (z > n)
            {
                break;
            }
            if ((i & 1) == (j & 1))
            {
                ans[i][j] = z;
                z += 2;
            }
        }
    }
    z = 2;
    for (ll i = 0; i < x; i++)
    {
        if (z > n)
        {
            break;
        }
        for (ll j = 0; j < y; j++)
        {
            if (z > n)
            {
                break;
            }
            if ((i & 1) != (j & 1))
            {
                ans[i][j] = z;
                z += 2;
            }
        }
    }
    for (ll i = 0; i < x; i++)
    {
        for (ll j = 0; j < y; j++)
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