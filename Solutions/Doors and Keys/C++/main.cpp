// Problem: Doors and Keys
// Link to the problem: https://codeforces.com/contest/1644/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    bool r = false, g = false, b = false;
    for (const char c : s)
    {
        if (c == 'r')
        {
            r = true;
        }
        if (c == 'R')
        {
            if (!r)
            {
                cout << "NO" << endl;
                return;
            }
        }
        if (c == 'g')
        {
            g = true;
        }
        if (c == 'G')
        {
            if (!g)
            {
                cout << "NO" << endl;
                return;
            }
        }
        if (c == 'b')
        {
            b = true;
        }
        if (c == 'B')
        {
            if (!b)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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