// Problem: Square
// Link to the problem: https://codeforces.com/contest/1921/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4;
    if (x1 == x2)
    {
        cout << (abs(y2 - y1)) * (abs(y2 - y1)) << endl;
        return;
    }
    if (x1 == x3)
    {
        cout << (abs(y3 - y1)) * (abs(y3 - y1)) << endl;
        return;
    }
    if (x1 == x4)
    {
        cout << (abs(y4 - y1)) * (abs(y4 - y1)) << endl;
        return;
    }
    if (x2 == x3)
    {
        cout << (abs(y3 - y2)) * (abs(y3 - y2)) << endl;
        return;
    }
    if (x2 == x4)
    {
        cout << (abs(y4 - y2)) * (abs(y4 - y2)) << endl;
        return;
    }
    if (x3 == x4)
    {
        cout << (abs(y4 - y3)) * (abs(y4 - y3)) << endl;
        return;
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