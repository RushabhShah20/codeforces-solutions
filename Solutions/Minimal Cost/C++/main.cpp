// Problem: Minimal Cost
// Link to the problem: https://codeforces.com/contest/1491/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = LLONG_MAX;
    for (ll i = 1; i < n; i++)
    {
        const ll z = abs(a[i] - a[i - 1]);
        ans = min(ans, (z >= 2 ? 0 : (z == 1 ? min(x, y) : y + min(x, y))));
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