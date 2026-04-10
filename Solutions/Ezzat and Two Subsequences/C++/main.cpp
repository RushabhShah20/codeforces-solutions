// Problem: Ezzat and Two Subsequences
// Link to the problem: https://codeforces.com/contest/1557/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll b = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        b += a[i];
    }
    long double ans = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        const long double x = (long double)a[i], y = (long double)(b - a[i]) / (n - 1), z = x + y;
        ans = max(ans, z);
    }
    cout << fixed << setprecision(10) << ans << endl;
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