// Problem: Treasure Hunt
// Link to the problem: https://codeforces.com/contest/817/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, y1, x2, y2, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;
    const ll z1 = abs(x2 - x1), z2 = abs(y2 - y1);
    const string ans = z1 % x == 0 && z2 % y == 0 && (z1 / x & 1) == (z2 / y & 1) ? "YES" : "NO";
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