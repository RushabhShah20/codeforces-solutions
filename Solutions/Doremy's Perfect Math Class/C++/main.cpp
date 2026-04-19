// Problem: Doremy's Perfect Math Class
// Link to the problem: https://codeforces.com/contest/1764/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll g, mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mx = max(mx, x);
        if (i == 0)
        {
            g = x;
        }
        else
        {
            g = __gcd(g, x);
        }
    }
    const ll ans = mx / g;
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