// Problem: Hard Way
// Link to the problem: https://codeforces.com/contest/1642/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (y1 == y2 && y3 < y1)
    {
        cout << abs(x1 - x2) << endl;
        return;
    }
    if (y2 == y3 && y1 < y2)
    {
        cout << abs(x2 - x3) << endl;
        return;
    }
    if (y3 == y1 && y2 < y3)
    {
        cout << abs(x3 - x1) << endl;
        return;
    }
    cout << 0 << endl;
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