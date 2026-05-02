// Problem: Rectangle Arrangement
// Link to the problem: https://codeforces.com/contest/2027/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = LLONG_MIN, y = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll w, h;
        cin >> w >> h;
        x = max(x, w);
        y = max(y, h);
    }
    const ll ans = 2 * (x + y);
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