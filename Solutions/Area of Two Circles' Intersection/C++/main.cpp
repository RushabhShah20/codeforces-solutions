// Problem: Area of Two Circles' Intersection
// Link to the problem: https://codeforces.com/contest/600/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    const long double d = sqrtl(powl(x2 - x1, 2) + powl(y2 - y1, 2));
    const long double pi = atanl(1.0) * 4.0;
    if (d >= (r1 + r2))
    {
        cout << fixed << setprecision(20) << 0 << endl;
        return;
    }
    if (d <= abs(r1 - r2))
    {
        cout << fixed << setprecision(20) << pi * powl(min(r1, r2), 2) << endl;
        return;
    }
    const long double a1 = 2 * acosl((powl(r1, 2) + powl(d, 2) - powl(r2, 2)) / (2 * r1 * d));
    const long double a2 = 2 * acosl((powl(r2, 2) + powl(d, 2) - powl(r1, 2)) / (2 * r2 * d));
    const long double ans = (0.5 * powl(r1, 2) * ((a1)-sinl(a1))) + (0.5 * powl(r2, 2) * ((a2)-sinl(a2)));
    cout << fixed << setprecision(20) << ans << endl;
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