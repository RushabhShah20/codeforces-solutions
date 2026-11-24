// Problem: Increasing Matrix
// Link to the problem: https://codeforces.com/contest/1231/problem/C
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
    for (ll i = n - 2; i >= 1; i--)
    {
        for (ll j = m - 2; j >= 1; j--)
        {
            if (a[i][j] == 0)
            {
                a[i][j] = min(a[i + 1][j], a[i][j + 1]) - 1;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (i > 0 && a[i][j] <= a[i - 1][j])
            {
                cout << -1 << endl;
                return;
            }
            if (j > 0 && a[i][j] <= a[i][j - 1])
            {
                cout << -1 << endl;
                return;
            }
            if (i < n - 1 && a[i + 1][j] <= a[i][j])
            {
                cout << -1 << endl;
                return;
            }
            if (j < m - 1 && a[i][j + 1] <= a[i][j])
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ans += a[i][j];
        }
    }
    cout << ans << endl;
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