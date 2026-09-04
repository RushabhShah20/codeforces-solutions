// Problem: Subrectangle Guess
// Link to the problem: https://codeforces.com/contest/1695/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    ll x = 0, y = 0, mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (mx < a[i][j])
            {
                mx = a[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
    }
    const ll ans = max(x, n + 1 - x) * max(y, m + 1 - y);
    cout << ans << endl;
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