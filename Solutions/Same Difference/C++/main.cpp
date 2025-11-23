// Problem: Same Difference
// Link to the problem: https://codeforces.com/contest/2166/problem/A
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    char c = s.back();
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] != c)
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