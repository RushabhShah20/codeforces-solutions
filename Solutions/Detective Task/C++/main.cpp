// Problem: Detective Task
// Link to the problem: https://codeforces.com/contest/1675/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll x = 0, y = n - 1;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            x = i;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            y = i;
        }
    }
    const ll ans = max(0LL, y - x + 1);
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