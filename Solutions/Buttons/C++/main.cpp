// Problem: Buttons
// Link to the problem: https://codeforces.com/contest/1858/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    bool x = true;
    if (c % 2 != 0)
    {
        x = false;
    }
    if (a > b)
    {
        cout << "First" << endl;
    }
    else if (a < b)
    {
        cout << "Second" << endl;
    }
    else
    {
        if (x == true)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "First" << endl;
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