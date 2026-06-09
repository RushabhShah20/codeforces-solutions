// Problem: Shortest Path with Obstacle
// Link to the problem: https://codeforces.com/contest/1547/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    const ll z = abs(x1 - x2) + abs(y1 - y2), ans = ((x1 == x2 && x2 == x3) && (y3 >= min(y1, y2) && y3 <= max(y1, y2))) || ((y1 == y2 && y2 == y3) && (x3 >= min(x1, x2) && x3 <= max(x1, x2))) ? z + 2 : z;
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