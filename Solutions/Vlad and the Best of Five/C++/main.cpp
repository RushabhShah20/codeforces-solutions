// Problem: Vlad and the Best of Five
// Link to the problem: https://codeforces.com/contest/1926/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll count = 0;
    for (const char &c : s)
    {
        if (c == 'A')
        {
            count++;
        }
    }
    if (count >= 3)
    {
        cout << "A" << endl;
    }
    else
    {
        cout << "B" << endl;
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