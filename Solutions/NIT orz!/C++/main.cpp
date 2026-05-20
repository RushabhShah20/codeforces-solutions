// Problem: NIT orz!
// Link to the problem: https://codeforces.com/contest/1696/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mx = max(mx, x | k);
    }
    const ll ans = mx;
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