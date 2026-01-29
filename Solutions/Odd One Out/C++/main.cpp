// Problem: Odd One Out
// Link to the problem: https://codeforces.com/contest/1915/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        cout << c << endl;
    }
    else if (b == c)
    {
        cout << a << endl;
    }
    else
    {
        cout << b << endl;
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