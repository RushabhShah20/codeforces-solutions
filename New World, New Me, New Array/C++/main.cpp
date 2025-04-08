// Problem: New World, New Me, New Array
// Link to the problem: https://codeforces.com/contest/2072/problem/A
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
        ll n, k, p;
        cin >> n >> k >> p;
        ll ans;
        if (k <= 0)
        {
            if (k % (-1 * p) == 0)
            {
                ans = (k / (-1 * p));
            }
            else
            {
                ans = ((k / (-1 * p)) + 1);
            }
        }
        else
        {
            if (k % p == 0)
            {
                ans = (k / p);
            }
            else
            {
                ans = ((k / p) + 1);
            }
        }
        if (ans <= n)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}