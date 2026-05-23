// Problem: Fix You
// Link to the problem: https://codeforces.com/contest/1391/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    ll ans = 0;
    for (ll i = 0; i < m - 1; i++)
    {
        if (s[n - 1][i] == 'D')
        {
            ans++;
        }
    }
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i][m - 1] == 'R')
        {
            ans++;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}