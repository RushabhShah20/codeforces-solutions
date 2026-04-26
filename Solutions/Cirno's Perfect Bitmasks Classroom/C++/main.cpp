// Problem: Cirno's Perfect Bitmasks Classroom
// Link to the problem: https://codeforces.com/contest/1688/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x;
    cin >> x;
    ll y = x & -x;
    if (y == x)
    {
        if (x == 1)
        {
            y = 3;
        }
        else
        {
            y = x + 1;
        }
    }
    cout << y << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}