// Problem: Make Equal Again
// Link to the problem: https://codeforces.com/contest/1931/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = n - 1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != a[0])
        {
            l = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] != a[0])
        {
            r = i;
            break;
        }
    }
    const ll x = r - l + 1;
    l = 0, r = n - 1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != a[n - 1])
        {
            l = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] != a[n - 1])
        {
            r = i;
            break;
        }
    }
    const ll y = r - l + 1, z = min(x, y), ans = z == n ? 0 : z;
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