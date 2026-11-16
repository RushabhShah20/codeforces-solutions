// Problem: Chess Tournament
// Link to the problem: https://codeforces.com/contest/1569/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> ans(n, string(n, '='));
    for (ll i = 0; i < n; i++)
    {
        ans[i][i] = 'X';
    }
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '2')
        {
            a.push_back(i);
        }
    }
    const ll m = a.size();
    if (m == 1 || m == 2)
    {
        cout << "NO" << endl;
        return;
    }
    for (ll i = 0; i < m; i++)
    {
        const int x = a[i], y = a[(i + 1) % m];
        ans[x][y] = '+';
        ans[y][x] = '-';
    }
    cout << "YES" << endl;
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