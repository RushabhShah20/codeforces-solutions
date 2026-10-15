// Problem: Math Problem
// Link to the problem: https://codeforces.com/contest/1227/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a = 0, b = 1000000001;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        a = max(a, x);
        b = min(b, y);
    }
    const ll ans = max(0LL, a - b);
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