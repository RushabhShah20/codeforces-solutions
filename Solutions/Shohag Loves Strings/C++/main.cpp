// Problem: Shohag Loves Strings
// Link to the problem: https://codeforces.com/contest/2039/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            cout << s[i - 1] << s[i] << endl;
            return;
        }
    }
    for (ll i = 1; i < n - 1; i++)
    {
        if (s[i] != s[i - 1] && s[i] != s[i - 1] && s[i - 1] != s[i + 1])
        {
            cout << s[i - 1] << s[i] << s[i + 1] << endl;
            return;
        }
    }
    cout << -1 << endl;
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