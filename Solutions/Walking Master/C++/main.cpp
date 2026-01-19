// Problem: Walking Master
// Link to the problem: https://codeforces.com/contest/1806/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    const ll x = d - b;
    if (x < 0)
    {
        cout << -1 << endl;
        return;
    }
    a += x;
    if (a < c)
    {
        cout << -1 << endl;
        return;
    }
    const ll ans = x + (a - c);
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