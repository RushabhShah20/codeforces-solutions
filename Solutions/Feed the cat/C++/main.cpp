// Problem: Feed the cat
// Link to the problem: https://codeforces.com/contest/955/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, a, b, c, d;
    cin >> x >> y >> a >> b >> c >> d;
    const long double ans = min((double)((a + d - 1) / d * c), 0.8 * (((max(0LL, 1200 - 60 * x - y) * b + a) + d - 1) / d) * c);
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