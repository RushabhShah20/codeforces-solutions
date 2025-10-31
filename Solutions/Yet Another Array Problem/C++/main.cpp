// Problem: Yet Another Array Problem
// Link to the problem: https://codeforces.com/contest/2167/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = -1;
    ll g = a[0];
    for (ll i = 1; i < n; i++)
    {
        g = gcd(g, a[i]);
    }
    if (g == 1)
    {
        cout << 2 << endl;
        return;
    }
    for (ll i = 2; i <= 1e18; i++)
    {
        if (gcd(i, g) == 1)
        {
            cout << i << endl;
            return;
        }
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}