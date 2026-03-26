// Problem: Good Matrix Elements
// Link to the problem: https://codeforces.com/contest/177/problem/A2
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, ans = 0;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    const ll m = (n - 1) / 2;
    for (ll i = 0; i < n; i++)
    {
        ans += a[i][i];
        ans += a[n - i - 1][i];
        ans += a[m][i];
        ans += a[i][m];
    }
    ans -= 3 * (a[m][m]);
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