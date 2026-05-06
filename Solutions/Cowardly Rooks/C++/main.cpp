// Problem: Cowardly Rooks
// Link to the problem: https://codeforces.com/contest/1749/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    set<pair<ll, ll>> s;
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        for (ll j = 1; j <= n; j++)
        {
            s.insert({x, j});
            s.insert({j, y});
        }
    }
    const string ans = n * n > s.size() ? "YES" : "NO";
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