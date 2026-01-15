// Problem: Unit Array
// Link to the problem: https://codeforces.com/contest/1834/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            x++;
        }
    }
    ll y = n - x;
    ll ans = 0;
    if (x < y)
    {
        const ll b = ((y - x) % 2 == 0) ? ((y - x) / 2) : (((y - x) / 2) + 1);
        ans += b;
        y -= b;
    }
    if (y % 2 != 0)
    {
        ans++;
    }
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