// Problem: Maximum Product
// Link to the problem: https://codeforces.com/contest/1406/problem/B
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
    sort(a.begin(), a.end());
    const ll x = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
    const ll y = a[n - 1] * a[n - 2] * a[n - 3] * a[1] * a[0];
    const ll z = a[n - 1] * a[3] * a[2] * a[1] * a[0];
    const ll ans = max({x, y, z});
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