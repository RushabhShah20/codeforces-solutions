// Problem: Clock and Strings
// Link to the problem: https://codeforces.com/contest/1971/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    b = (b - a + 12) % 12;
    c = (c - a + 12) % 12;
    d = (d - a + 12) % 12;
    if ((c < b && d < b) || (c > b && d > b))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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