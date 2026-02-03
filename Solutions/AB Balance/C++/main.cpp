// Problem: AB Balance
// Link to the problem: https://codeforces.com/contest/1606/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s.front() != s.back())
    {
        if (s[0] == 'a')
        {
            s[0] = 'b';
        }
        else
        {
            s[0] = 'a';
        }
    }
    cout << s << endl;
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