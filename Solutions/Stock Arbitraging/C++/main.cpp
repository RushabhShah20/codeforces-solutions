// Problem: Stock Arbitraging
// Link to the problem: https://codeforces.com/contest/1150/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, r;
    cin >> n >> m >> r;
    ll mn = LLONG_MAX, mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mn = min(mn, x);
    }
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        mx = max(mx, x);
    }
    const ll ans = max(r, r % mn + r / mn * mx);
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