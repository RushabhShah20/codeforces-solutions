// Problem: X Axis
// Link to the problem: https://codeforces.com/contest/1986/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    const ll a = abs(x1 - x2), b = abs(x1 - x3), c = abs(x2 - x3), ans = min({a + b, b + c, c + a});
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}