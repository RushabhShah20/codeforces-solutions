// Problem: Sublime Sequence
// Link to the problem: https://codeforces.com/contest/2148/problem/A
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
        ll x, n;
        cin >> x >> n;
        if (n % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << x << endl;
        }
    }
    return 0;
}
