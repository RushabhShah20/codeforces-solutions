// Problem: Dinner with Emma
// Link to the problem: https://codeforces.com/contest/616/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll y = LLONG_MAX;
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            y = min(y, x);
        }
        ans = max(ans, y);
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