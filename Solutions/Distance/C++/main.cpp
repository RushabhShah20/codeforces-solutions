// Problem: Distance
// Link to the problem: https://codeforces.com/contest/1612/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x % 2 == y % 2)
    {
        if (x % 2 == 0)
        {
            cout << x / 2 << " " << y / 2 << endl;
        }
        else
        {
            if (min(x, y) == x)
            {
                cout << x << " " << (x + y) / 2 - x << endl;
            }
            else
            {
                cout << (x + y) / 2 - y << " " << y << endl;
            }
        }
    }
    else
    {
        cout << -1 << " " << -1 << endl;
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