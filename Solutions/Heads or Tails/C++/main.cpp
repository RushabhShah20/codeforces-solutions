// Problem: Heads or Tails
// Link to the problem: https://codeforces.com/contest/242/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    vector<pair<ll, ll>> ans;
    for (ll i = a; i <= x; i++)
    {
        for (ll j = b; j <= y; j++)
        {
            if (i > j)
            {
                ans.push_back({i, j});
            }
        }
    }
    const ll n = ans.size();
    cout << n << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
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