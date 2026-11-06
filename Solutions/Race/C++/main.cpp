// Problem: Race
// Link to the problem: https://codeforces.com/contest/2112/problem/A
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
        ll a, x, y;
        cin >> a >> x >> y;
        if (a >= min(x, y) && a <= max(x, y))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}