// Problem: Temporarily unavailable
// Link to the problem: https://codeforces.com/contest/1282/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    const ll x = min(a, b), y = max(a, b), p = max(c - d, x), q = min(c + d, y);
    const ll ans = max(0LL, max(0LL, y - x) - max(0LL, q - p));
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