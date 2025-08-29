// Problem: In the Dream
// Link to the problem: https://codeforces.com/contest/2136/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll x = c - a, y = d - b;
        if ((((2 * min(a, b)) + 2) < max(a, b)) || (((2 * min(x, y)) + 2) < max(x, y)))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
