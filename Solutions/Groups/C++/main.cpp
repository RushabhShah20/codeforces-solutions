// Problem: Groups
// Link to the problem: https://codeforces.com/contest/1598/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(5));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    const ll m = n >> 1;
    for (ll i = 0; i < 5; i++)
    {
        for (ll j = i + 1; j < 5; j++)
        {
            ll x = 0, y = 0, z = 0;
            for (ll k = 0; k < n; k++)
            {
                x += a[k][i] == 1 && a[k][j] == 0;
                y += a[k][i] == 0 && a[k][j] == 1;
                z += a[k][i] == 1 && a[k][j] == 1;
            }
            if (x + y + z == n && x <= m && y <= m)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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