// Problem: Gifts Fixing
// Link to the problem: https://codeforces.com/contest/1399/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = LLONG_MAX, y = LLONG_MAX, ans = 0;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x = min(x, a[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        y = min(y, b[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        ans += max(a[i] - x, b[i] - y);
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