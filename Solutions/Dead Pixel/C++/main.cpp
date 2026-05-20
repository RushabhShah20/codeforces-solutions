// Problem: Dead Pixel
// Link to the problem: https://codeforces.com/contest/1315/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    const ll w1 = x, w2 = a - x - 1, h1 = y, h2 = b - y - 1, ans = max({w1 * b, w2 * b, h1 * a, h2 * a});
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