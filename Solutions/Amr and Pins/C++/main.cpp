// Problem: Amr and Pins
// Link to the problem: https://codeforces.com/contest/507/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    const ll x = x2 - x1, y = y2 - y1;
    const long double z = sqrtl(x * x + y * y);
    const ll ans = ceil(z / (2 * r));
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