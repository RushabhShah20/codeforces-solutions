// Problem: Boboniu Likes to Color Balls
// Link to the problem: https://codeforces.com/contest/1395/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, w;
    cin >> a >> b >> c >> w;
    const ll x = min({a, b, c});
    if (x == 0)
    {
        const ll y = (a & 1 ? 1 : 0) + (c & 1 ? 1 : 0) + (b & 1 ? 1 : 0) + (w & 1 ? 1 : 0);
        const string ans = y > 1 ? "No" : "Yes";
        cout << ans << endl;
    }
    else
    {
        const ll p = a - 1, q = b - 1, r = c - 1, z = w + 3;
        const ll d = (a & 1 ? 1 : 0) + (c & 1 ? 1 : 0) + (b & 1 ? 1 : 0) + (w & 1 ? 1 : 0);
        const ll e = (p & 1 ? 1 : 0) + (q & 1 ? 1 : 0) + (r & 1 ? 1 : 0) + (z & 1 ? 1 : 0);
        const string ans = d > 1 && e > 1 ? "No" : "Yes";
        cout << ans << endl;
    }
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