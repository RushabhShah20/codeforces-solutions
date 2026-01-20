// Problem: 01 Game
// Link to the problem: https://codeforces.com/contest/1373/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll count = 0;
    for (const char &c : s)
    {
        if (c == '1')
        {
            count++;
        }
    }
    if (min(count, n - count) % 2 == 0)
    {
        cout << "NET" << endl;
    }
    else
    {
        cout << "DA" << endl;
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