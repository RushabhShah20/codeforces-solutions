// Problem: Expensive Number
// Link to the problem: https://codeforces.com/contest/2093/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll x = 0;
    bool y = false;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] != '0')
        {
            y = true;
        }
        else if (y)
        {
            x++;
        }
    }
    const ll ans = n - (x + 1);
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