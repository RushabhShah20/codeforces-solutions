// Problem: Line Segments
// Link to the problem: https://codeforces.com/contest/2119/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    vector<ll> a(n);
    long double b = 0, c = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        b += a[i];
        c = max(c, (long double)a[i]);
    }
    const long double z = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    const long double d = max((long double)0.0, 2 * c - b);
    const string ans = b * b < z ? "No" : (z < d * d ? "No" : "Yes");
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