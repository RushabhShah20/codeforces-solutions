// Problem: Candies for Nephews
// Link to the problem: https://codeforces.com/contest/2145/problem/A
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
        ll n;
        cin >> n;
        if (n % 3 == 1)
        {
            cout << 2 << endl;
        }
        else if (n % 3 == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}