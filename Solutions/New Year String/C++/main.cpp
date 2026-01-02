// Problem: New Year String
// Link to the problem: https://codeforces.com/contest/2182/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (s.find("2026") != s.npos || s.find("2025") == s.npos)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
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