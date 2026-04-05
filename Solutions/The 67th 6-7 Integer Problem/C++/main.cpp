// Problem: The 67th 6-7 Integer Problem
// Link to the problem: https://codeforces.com/contest/2218/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(7);
    for (ll i = 0; i < 7; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll x = 0, y = 0;
    for (ll i = 0; i < 7; i++)
    {
        if (i < 6)
        {
            x -= a[i];
        }
        else
        {
            x += a[i];
        }
        if (i >= 1)
        {
            y -= a[i];
        }
        else
        {
            y += a[i];
        }
    }
    const ll ans = max(x, y);
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