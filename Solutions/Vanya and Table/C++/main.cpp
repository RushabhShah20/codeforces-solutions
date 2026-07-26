// Problem: Vanya and Table
// Link to the problem: https://codeforces.com/contest/552/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(100, vector<ll>(100, 0));
    for (ll i = 0; i < n; i++)
    {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (ll j = x1 - 1; j <= x2 - 1; j++)
        {
            for (ll k = y1 - 1; k <= y2 - 1; k++)
            {
                a[j][k]++;
            }
        }
    }
    ll ans = 0;
    for (ll i = 0; i < 100; i++)
    {
        for (ll j = 0; j < 100; j++)
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