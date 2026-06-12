// Problem: Wasted Time
// Link to the problem: https://codeforces.com/contest/127/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    long double x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    for (ll i = 1; i < n; i++)
    {
        const ll x1 = a[i].first, x2 = a[i - 1].first, y1 = a[i].second, y2 = a[i - 1].second;
        x += sqrtl((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    }
    const long double ans = k * x / 50.0;
    cout << fixed << setprecision(10) << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}