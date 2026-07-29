// Problem: Water Lily
// Link to the problem: https://codeforces.com/contest/1199/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    long double x, y;
    cin >> x >> y;
    const long double ans = (y * y - x * x) / (2 * x);
    cout << fixed << setprecision(15) << ans << endl;
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