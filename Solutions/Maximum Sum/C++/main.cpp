// Problem: Maximum Sum
// Link to the problem: https://codeforces.com/contest/1832/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    b[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        b[i] = b[i - 1] + a[i];
    }
    ll ans = 0;
    for (ll i = 0; i <= k; i++)
    {
        const ll l = 2 * i, r = n - k + i - 1, sum = b[r] - (l == 0 ? 0 : b[l - 1]);
        ans = max(ans, sum);
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