// Problem: Vasya and Book
// Link to the problem: https://codeforces.com/contest/1082/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y, d;
    cin >> n >> x >> y >> d;
    const ll z = abs(x - y);
    const ll a = z % d == 0 ? (z + d - 1) / d : LLONG_MAX, b = (y - 1) % d == 0 ? (abs(x - 1) + d - 1) / d + (abs(y - 1) + d - 1) / d : LLONG_MAX, c = (n - y) % d == 0 ? (abs(n - x) + d - 1) / d + (abs(n - y) + d - 1) / d : LLONG_MAX;
    const ll ans = min({a, b, c}) == LLONG_MAX ? -1 : min({a, b, c});
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