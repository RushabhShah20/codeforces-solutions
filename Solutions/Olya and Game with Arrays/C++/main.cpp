// Problem: Olya and Game with Arrays
// Link to the problem: https://codeforces.com/contest/1859/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0, a = LLONG_MAX, b = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        ll x = LLONG_MAX, y = LLONG_MAX;
        for (ll j = 0; j < m; j++)
        {
            ll z;
            cin >> z;
            if (z < x)
            {
                y = x;
                x = z;
            }
            else if (z < y)
            {
                y = z;
            }
        }
        a = min(a, x);
        b = min(b, y);
        ans += y;
    }
    ans += a - b;
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