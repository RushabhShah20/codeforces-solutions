// Problem: Pouring Rain
// Link to the problem: https://codeforces.com/contest/667/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    long double x, y, a, b;
    cin >> x >> y >> a >> b;
    const long double z = x / 2.0;
    const long double PI = acosl(-1.0);
    const long double c = PI * b * z * z;
    if (a <= c)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        const long double ans = PI * z * z * y / (a - c);
        cout << fixed << setprecision(15) << ans << endl;
    }
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