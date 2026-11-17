// Problem: Digit String
// Link to the problem: https://codeforces.com/contest/2230/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll a = 0, b = 0, c = 0, d = 0;
    for (ll i = 0; i < n; i++)
    {
        a += s[i] == '1' ? 1 : 0;
        b += s[i] == '2' ? 1 : 0;
        c += s[i] == '3' ? 1 : 0;
        d += s[i] == '4' ? 1 : 0;
    }
    ll x = 0, y = b, z = b;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '2')
        {
            y--;
        }
        else if (s[i] - '0' & 1)
        {
            x++;
        }
        z = min(z, x + y);
    }
    const ll ans = d + z;
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