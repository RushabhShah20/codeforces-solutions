// Problem: Destroying Towers
// Link to the problem: https://codeforces.com/contest/2237/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0, mn = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mn = min(mn, x);
        ans += mn;
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