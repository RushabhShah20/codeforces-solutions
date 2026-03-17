// Problem: Spring
// Link to the problem: https://codeforces.com/contest/2204/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, m;
    cin >> a >> b >> c >> m;
    const ll x = a * b / __gcd(a, b), y = b * c / __gcd(b, c), z = a * c / __gcd(a, c);
    ll p = 6 * (m / a) - (3 * (m / x)) - (3 * (m / z)), q = 6 * (m / b) - (3 * (m / x)) - (3 * (m / y)), r = 6 * (m / c) - (3 * (m / y)) - (3 * (m / z));
    const ll w = a * (y) / __gcd(a, y);
    p += 2 * (m / w);
    q += 2 * (m / w);
    r += 2 * (m / w);
    cout << p << " " << q << " " << r << endl;
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