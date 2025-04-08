// Problem: Minimal Coprime
// Link to the problem: https://codeforces.com/contest/2063/problem/A
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
        ll n, x;
        cin >> n >> x;
        if (n == 1 && x == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << x - n << endl;
        }
    }
    return 0;
}