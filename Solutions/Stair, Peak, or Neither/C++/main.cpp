// Problem: Stair, Peak, or Neither?
// Link to the problem: https://codeforces.com/contest/1950/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c)
    {
        cout << "STAIR" << endl;
    }
    else if (a < b && b > c)
    {
        cout << "PEAK" << endl;
    }
    else
    {
        cout << "NONE" << endl;
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