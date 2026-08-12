// Problem: M-arrays
// Link to the problem: https://codeforces.com/contest/1497/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x % k]++;
    }
    ll ans = a[0] > 0 ? 1 : 0;
    ll l = 1, r = k - 1;
    while (l <= r)
    {
        if (l == r)
        {
            ans += a[l] > 0 ? 1 : 0;
            break;
        }
        const ll x = min(a[l], a[r]), y = max(a[l], a[r]);
        ans += x == 0 && y == 0 ? 0 : (x == 0 ? y : (y - x <= 1 ? 1 : 1 + (y - (x + 1))));
        l++;
        r--;
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