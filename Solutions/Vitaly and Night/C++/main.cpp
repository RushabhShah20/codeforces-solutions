// Problem: Vitaly and Night
// Link to the problem: https://codeforces.com/contest/595/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(2 * m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 2 * m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 2 * m; j += 2)
        {
            if (a[i][j] == 1 || a[i][j + 1] == 1)
            {
                ans++;
            }
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