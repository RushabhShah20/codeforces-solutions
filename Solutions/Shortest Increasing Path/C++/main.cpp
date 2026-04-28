// Problem: Shortest Increasing Path
// Link to the problem: https://codeforces.com/contest/2147/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x > y)
    {
        if (x - 1 > y && y != 1)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else if (x < y)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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