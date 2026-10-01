// Problem: Luke is a Foodie
// Link to the problem: https://codeforces.com/contest/1704/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0, mn = a[0] - k, mx = a[0] + k;
    for (ll i = 1; i < n; i++)
    {
        mn = max(mn, a[i] - k);
        mx = min(mx, a[i] + k);
        if (mx < mn)
        {
            ans++;
            mn = a[i] - k;
            mx = a[i] + k;
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