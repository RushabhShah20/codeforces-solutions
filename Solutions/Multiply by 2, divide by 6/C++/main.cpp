// Problem: Multiply by 2, divide by 6
// Link to the problem: https://codeforces.com/contest/1374/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll count3 = 0, count2 = 0;
    while (n % 3 == 0)
    {
        count3++;
        n /= 3;
    }
    while (n % 2 == 0)
    {
        count2++;
        n /= 2;
    }
    if (n != 1)
    {
        cout << -1 << endl;
    }
    else
    {
        if (count2 > count3)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count3 + (count3 - count2) << endl;
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}