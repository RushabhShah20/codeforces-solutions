// Problem: Binary Removals
// Link to the problem: https://codeforces.com/contest/1499/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll l = -1, r = -1;
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1')
        {
            l = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 1; i--)
    {
        if (s[i] == '0' && s[i - 1] == '0')
        {
            r = i - 1;
            break;
        }
    }
    const string ans = l != -1 && r != -1 && l < r ? "NO" : "YES";
    cout << ans << endl;
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