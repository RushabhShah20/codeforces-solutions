// Problem: Building an Aquarium
// Link to the problem: https://codeforces.com/contest/1873/problem/E
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    ll ans = 0, l = 1, r = mx + k;
    while (l <= r)
    {
        const ll m = l + (r - l) / 2;
        ll x = 0;
        for (ll i = 0; i < n; i++)
        {
            x += max(0LL, m - a[i]);
        }
        if (x <= k)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
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