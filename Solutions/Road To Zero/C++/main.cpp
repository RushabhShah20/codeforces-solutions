// Problem: Road To Zero
// Link to the problem: https://codeforces.com/contest/1342/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    const ll ans = min({x * a + y * a, b * min(x, y) + a * (max(x, y) - min(x, y)), b * max(x, y) + a * (max(x, y) - min(x, y))});
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