// Problem: Blackslex and Showering
// Link to the problem: https://codeforces.com/contest/2179/problem/B
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
    vector<ll> b(n - 1);
    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ans += abs(a[i + 1] - a[i]);
    }
    ll x = max(abs(a[1] - a[0]), abs(a[n - 1] - a[n - 2]));
    for (int i = 1; i < n - 1; i++)
    {
        x = max(x, abs(a[i] - a[i - 1]) + abs(a[i + 1] - a[i]) - abs(a[i + 1] - a[i - 1]));
    }
    ans -= x;
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