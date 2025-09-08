// Problem: Collatz Conjecture
// Link to the problem: https://codeforces.com/contest/2137/problem/A
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
        ull x, k;
        cin >> k >> x;
        for (int i = 0; i < k; i++)
        {
            if ((x - 1) % 3 == 0 && (x != 1) && ((x - 1) / 3) % 2 == 1)
            {
                x = (x - 1) / 3;
            }
            else
            {
                x *= 2;
            }
        }
        cout << x << endl;
    }
    return 0;
}
