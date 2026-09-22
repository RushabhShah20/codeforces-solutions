// Problem: Magic Spheres
// Link to the problem: https://codeforces.com/contest/606/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    ll x = 0, y = 0;
    if (a > d)
    {
        x += (a - d) >> 1;
    }
    else
    {
        y += d - a;
    }
    if (b > e)
    {
        x += (b - e) >> 1;
    }
    else
    {
        y += e - b;
    }
    if (c > f)
    {
        x += (c - f) >> 1;
    }
    else
    {
        y += f - c;
    }
    const string ans = x >= y ? "Yes" : "No";
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