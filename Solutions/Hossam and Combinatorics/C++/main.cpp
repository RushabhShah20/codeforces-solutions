// Problem: Hossam and Combinatorics
// Link to the problem: https://codeforces.com/contest/1771/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mn = LLONG_MAX, mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == mn)
        {
            x++;
        }
        if (a[i] == mx)
        {
            y++;
        }
    }
    const ll ans = mn == mx ? n * (n - 1) : 2 * x * y;
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