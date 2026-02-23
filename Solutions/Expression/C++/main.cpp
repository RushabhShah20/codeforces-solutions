// Problem: Expression
// Link to the problem: https://codeforces.com/contest/479/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;
    const ll a = x + y + z, b = x * y * z, c = (x + y) * z, d = (y + z) * x, e = (x * y) + z, f = (y * z) + x;
    const ll ans = max({a, b, c, d, e, f});
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