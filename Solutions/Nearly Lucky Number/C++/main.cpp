// Problem: Nearly Lucky Number
// Link to the problem: https://codeforces.com/contest/110/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll ans = 0;
    for (const char &c : s)
    {
        if (c == '4' || c == '7')
        {
            ans++;
        }
    }
    if (ans == 4 || ans == 7)
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
    solve();
    return 0;
}