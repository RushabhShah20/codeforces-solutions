// Problem: Yura's New Name
// Link to the problem: https://codeforces.com/contest/1820/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    if (n == 1)
    {
        const ll ans = s[0] == '^' ? 1 : 2;
        cout << ans << endl;
        return;
    }
    ll ans = (s[0] == '^' ? 0 : 1) + (s[n - 1] == '^' ? 0 : 1);
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1] && s[i] == '_')
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