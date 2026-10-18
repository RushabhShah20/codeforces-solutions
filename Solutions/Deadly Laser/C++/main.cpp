// Problem: Deadly Laser
// Link to the problem: https://codeforces.com/contest/1721/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, x, y, k;
    cin >> n >> m >> x >> y >> k;
    if (k == 0)
    {
        cout << n + m - 2 << endl;
        return;
    }
    const ll ans = (x - 1 <= k && y - 1 <= k) || (x + k >= n && y + k >= m) || (x - 1 <= k && x + k >= n) || (y - 1 <= k && y + k >= m) ? -1 : n + m - 2;
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