// Problem: Division?
// Link to the problem: https://codeforces.com/contest/1669/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n <= 1399)
    {
        cout << "Division 4" << endl;
    }
    else if (n >= 1400 && n <= 1599)
    {
        cout << "Division 3" << endl;
    }
    else if (n >= 1600 && n <= 1899)
    {
        cout << "Division 2" << endl;
    }
    else
    {
        cout << "Division 1" << endl;
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