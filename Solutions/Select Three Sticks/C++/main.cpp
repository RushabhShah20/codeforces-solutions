// Problem: Select Three Sticks
// Link to the problem: https://codeforces.com/contest/1734/problem/A
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
    ll ans = LLONG_MAX;
    for (ll i = 2; i < n; i++)
    {
        const ll x = a[i - 1] - a[i - 2] + a[i] - a[i - 2], y = a[i] - a[i - 1] + a[i - 1] - a[i - 2], z = a[i] - a[i - 2] + a[i] - a[i - 1];
        ans = min({ans, x, y, z});
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