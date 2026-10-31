// Problem: Monocarp and Projects
// Link to the problem: https://codeforces.com/contest/2260/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;
    ll ans = max(0LL, k - y) * (y - x);
    for (ll i = 0; i < min(y, k); i++)
    {
        ans += (y + i) % (x + i);
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