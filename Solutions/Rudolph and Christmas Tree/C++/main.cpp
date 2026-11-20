// Problem: Rudolph and Christmas Tree
// Link to the problem: https://codeforces.com/contest/1846/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    const long double x = 0.5 * (long double)m * (long double)k;
    long double ans = x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n - 1; i++)
    {
        const ll y = max(0LL, k - a[i + 1] + a[i]);
        const long double z = (long double)y / k;
        ans += x * (1 - z * z);
    }
    cout << fixed << setprecision(15) << ans << endl;
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