// Problem: Hard Problem
// Link to the problem: https://codeforces.com/contest/2044/problem/C
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
        ll m, a, b, c;
        cin >> m >> a >> b >> c;
        ll first = m, second = m;
        ll ans = 0;
        if (first > a)
        {
            first = first - a;
            ans += a;
        }
        else
        {
            ans += first;
            first = 0;
        }
        if (second > b)
        {
            second = second - b;
            ans += b;
        }
        else
        {
            ans += second;
            second = 0;
        }
        if (first + second > c)
        {
            ans += c;
        }
        else
        {
            ans += first + second;
        }
        cout << ans << endl;
    }
    return 0;
}