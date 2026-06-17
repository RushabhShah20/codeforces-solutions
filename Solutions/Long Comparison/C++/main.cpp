// Problem: Long Comparison
// Link to the problem: https://codeforces.com/contest/1613/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    long double x1, x2;
    ll y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    while (x1 >= 10)
    {
        y1++;
        x1 /= 10;
    }
    while (x2 >= 10)
    {
        y2++;
        x2 /= 10;
    }
    if (y1 > y2)
    {
        cout << ">" << endl;
    }
    else if (y1 < y2)
    {
        cout << "<" << endl;
    }
    else
    {
        if (x1 > x2)
        {
            cout << ">" << endl;
        }
        else if (x1 < x2)
        {
            cout << "<" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
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