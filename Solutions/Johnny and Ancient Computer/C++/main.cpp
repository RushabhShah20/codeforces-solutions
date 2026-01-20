// Problem: Johnny and Ancient Computer
// Link to the problem: https://codeforces.com/contest/1362/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll x = 0, y = 0;
    while (a % 2 == 0)
    {
        a /= 2;
        x++;
    }
    while (b % 2 == 0)
    {
        b /= 2;
        y++;
    }
    if (a != b)
    {
        cout << -1 << endl;
    }
    else
    {
        const ll z = abs(x - y), ans = (z / 3) + ((z % 3 == 0) ? (0) : (1));
        cout << ans << endl;
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