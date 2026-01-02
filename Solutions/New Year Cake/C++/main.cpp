// Problem: New Year Cake
// Link to the problem: https://codeforces.com/contest/2182/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll x = 0, y = 0;
    ll c = a, d = b;
    ll i = 1;
    bool z = true;
    while (c >= 0 && d >= 0)
    {
        if (z == true)
        {
            c -= i;
            x++;
        }
        else
        {
            d -= i;
            x++;
        }
        i *= 2;
        z = !z;
    }
    c = a, d = b;
    i = 1;
    z = true;
    while (c >= 0 && d >= 0)
    {
        if (z == true)
        {
            d -= i;
            y++;
        }
        else
        {
            c -= i;
            y++;
        }
        i *= 2;
        z = !z;
    }
    ll ans = max(x - 1, y - 1);
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