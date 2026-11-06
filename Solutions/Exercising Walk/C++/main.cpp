// Problem: Exercising Walk
// Link to the problem: https://codeforces.com/contest/1332/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, d, x, y, x1, y1, x2, y2;
    cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 >> x2 >> y2;
    const ll x3 = x - a + b, y3 = y - c + d;
    const string ans = x3 < x1 || x3 > x2 || y3 < y1 || y3 > y2 || (a + b > 0 && x1 == x2) || (c + d > 0 && y1 == y2) ? "No" : "Yes";
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