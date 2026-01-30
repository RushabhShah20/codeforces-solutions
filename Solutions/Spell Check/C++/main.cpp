// Problem: Spell Check
// Link to the problem: https://codeforces.com/contest/1722/problem/A
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
    ll T = 0, i = 0, m = 0, u = 0, r = 0;
    bool x = false, y = false;
    for (const char c : s)
    {
        if (c == 'T')
        {
            T++;
        }
        if (c == 'i')
        {
            i++;
        }
        if (c == 'm')
        {
            m++;
        }
        if (c == 'u')
        {
            u++;
        }
        if (c == 'r')
        {
            r++;
        }
    }
    if (T == 1 && i == 1 && m == 1 && u == 1 && r == 1 && n == 5)
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