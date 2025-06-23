// Problem: Square Year
// Link to the problem: https://codeforces.com/contest/2114/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
bool isPerfectSquare(long long n)
{
    if (n <= 1)
    {
        return true;
    }
    long long left = 1, right = n;

    while (left <= right)
    {
        long long mid = left + (right - left) / 2;
        long long square = mid * mid;
        if (square == n)
        {
            return true;
        }
        else if (square < n)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll x = stoll(s);
        if (isPerfectSquare(x))
        {
            cout << 0 << " " << sqrt(x) << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}