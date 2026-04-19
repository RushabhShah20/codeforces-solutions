// Problem: Burenka Plays with Fractions
// Link to the problem: https://codeforces.com/contest/1720/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    const ll x = a * d, y = b * c;
    if (x == y)
    {
        cout << 0 << endl;
    }
    else if (__gcd(x, y) == x || __gcd(x, y) == y)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
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