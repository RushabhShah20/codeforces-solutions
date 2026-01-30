// Problem: Medium Number
// Link to the problem: https://codeforces.com/contest/1760/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    const ll x = min({a, b, c}), y = max({a, b, c});
    if ((x == b && y == c) || (x == c && y == b))
    {
        cout << a << endl;
    }
    else if ((x == a && y == c) || (x == c && y == a))
    {
        cout << b << endl;
    }
    else
    {
        cout << c << endl;
    }
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