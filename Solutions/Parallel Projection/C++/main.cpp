// Problem: Parallel Projection
// Link to the problem: https://codeforces.com/contest/1781/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll w, d, h, a, b, f, g;
    cin >> w >> d >> h >> a >> b >> f >> g;
    const ll ans = h + min(abs(a - f) + min(b + g, 2 * d - b - g), abs(b - g) + min(a + f, 2 * w - a - f));
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