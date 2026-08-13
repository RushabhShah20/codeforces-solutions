// Problem: Riptide
// Link to the problem: https://codeforces.com/contest/2254/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(3);
    cin >> a[0] >> a[1] >> a[2];
    const ll x = min({a[0], a[1], a[2]}), z = max({a[0], a[1], a[2]}), y = a[0] + a[1] + a[2] - x - z;
    const ll ans = min(z - y, y - x);
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