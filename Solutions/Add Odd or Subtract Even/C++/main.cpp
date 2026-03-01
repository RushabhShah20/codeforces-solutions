// Problem: Add Odd or Subtract Even
// Link to the problem: https://codeforces.com/contest/1311/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << endl;
    }
    else
    {
        if (a % 2 == b % 2)
        {
            if (a < b)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else
        {
            if (a < b)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
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