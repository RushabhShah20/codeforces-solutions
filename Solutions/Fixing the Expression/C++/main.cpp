// Problem: Fixing the Expression
// Link to the problem: https://codeforces.com/contest/2038/problem/N
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s[0] < s[2])
    {
        s[1] = '<';
    }
    else if (s[0] > s[2])
    {
        s[1] = '>';
    }
    else
    {
        s[1] = '=';
    }
    cout << s << endl;
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