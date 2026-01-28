// Problem: Love Story
// Link to the problem: https://codeforces.com/contest/1829/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const string t = "codeforces";
    ll ans = 0;
    for (int i = 0; i < 10; i++)
    {
        if (s[i] != t[i])
        {
            ans++;
        }
    }
    cout << ans << endl;
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