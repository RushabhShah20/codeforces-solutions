// Problem: Square Pool
// Link to the problem: https://codeforces.com/contest/2120/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a, b, x, y;
        cin >> a >> b >> x >> y;
        ans += (x - y == 0 && a == b) || (x + y == m && a != b) ? 1 : 0;
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