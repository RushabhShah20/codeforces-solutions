// Problem: Where do I Turn?
// Link to the problem: https://codeforces.com/contest/227/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    const ll ax = x2 - x1, ay = y2 - y1, bx = x3 - x2, by = y3 - y2;
    const string ans = ax * by > bx * ay ? "LEFT" : ((ax * by < bx * ay) ? "RIGHT" : "TOWARDS");
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