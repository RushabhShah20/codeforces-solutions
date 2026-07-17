// Problem: Forecast
// Link to the problem: https://codeforces.com/contest/630/problem/N
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    const long double d = sqrtl(b * b - 4 * a * c), x = (-b + d) / (2 * a), y = (-b - d) / (2 * a);
    cout << fixed << setprecision(10);
    cout << max(x, y) << endl;
    cout << min(x, y) << endl;
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