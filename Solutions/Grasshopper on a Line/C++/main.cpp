// Problem: Grasshopper on a Line
// Link to the problem: https://codeforces.com/contest/1837/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, k;
    cin >> x >> k;
    if (x % k == 0)
    {
        cout << 2 << endl
             << 1 << " " << x - 1 << endl;
    }
    else
    {
        cout << 1 << endl
             << x << endl;
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}