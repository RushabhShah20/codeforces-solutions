// Problem: Three swimmers
// Link to the problem: https://codeforces.com/contest/1492/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll p, a, b, c;
    cin >> p >> a >> b >> c;
    const ll x = a * ((p + a - 1) / a) - p, y = b * ((p + b - 1) / b) - p, z = c * ((p + c - 1) / c) - p, ans = min({x, y, z});
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