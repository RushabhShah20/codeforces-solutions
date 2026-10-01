// Problem: Game with Doors
// Link to the problem: https://codeforces.com/contest/2004/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r, u, d;
    cin >> l >> r >> u >> d;
    const ll mx = l > u ? l : u, mn = r < d ? r : d, x = mn - mx;
    const ll ans = x >= 0 ? x + (l != u) + (r != d) : 1;
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