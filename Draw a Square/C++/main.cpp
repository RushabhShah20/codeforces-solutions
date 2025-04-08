// Problem: Draw a Square
// Link to the problem: https://codeforces.com/contest/2074/problem/A
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
        ll l, r, d, u;
        cin >> l >> r >> d >> u;
        if (l == r && u == d && l == u)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}