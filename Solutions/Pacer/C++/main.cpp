// Problem: Pacer
// Link to the problem: https://codeforces.com/contest/2148/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 0, x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        ans += (a - x & 1) == (b - y & 1) ? a - x : a - x - 1;
        x = a;
        y = b;
    }
    ans += m - x;
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