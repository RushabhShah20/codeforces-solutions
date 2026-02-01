// Problem: Lucky?
// Link to the problem: https://codeforces.com/contest/1676/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll a = (s[0] - '0') + (s[1] - '0') + (s[2] - '0'), b = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
    if (a == b)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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