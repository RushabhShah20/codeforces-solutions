// Problem: Quadcopter Competition
// Link to the problem: https://codeforces.com/contest/883/problem/M
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    const ll ans = ((abs(x1 - x2) + abs(y1 - y2) + 2) << 1) + (x1 == x2 || y1 == y2 ? 2 : 0);
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