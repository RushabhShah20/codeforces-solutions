// Problem: Matrix Stabilization
// Link to the problem: https://codeforces.com/contest/1986/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    const vector<ll> x = {-1, 0, 1, 0}, y = {0, 1, 0, -1};
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll mx = 0;
            bool z = true;
            for (ll k = 0; k < 4; k++)
            {
                const ll p = i + x[k], q = j + y[k];
                if (p >= 0 && p < n && q >= 0 && q < m)
                {
                    mx = max(mx, a[p][q]);
                    if (a[i][j] <= a[p][q])
                    {
                        z = false;
                    }
                }
            }
            if (z)
            {
                a[i][j] = mx;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
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