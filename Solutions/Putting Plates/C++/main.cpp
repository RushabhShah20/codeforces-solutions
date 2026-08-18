// Problem: Putting Plates
// Link to the problem: https://codeforces.com/contest/1530/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> ans(n, string(m, '0'));
    for (ll j = 0; j < m; j += 2)
    {
        ans[0][j] = '1';
    }
    for (ll i = 2; i < n; i += 2)
    {
        ans[i][m - 1] = '1';
    }
    for (ll j = m - 3; j >= 0; j -= 2)
    {
        ans[n - 1][j] = '1';
    }
    for (ll i = n - 3; i >= 2; i -= 2)
    {
        ans[i][0] = '1';
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
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