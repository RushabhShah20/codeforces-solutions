// Problem: Shashliks
// Link to the problem: https://codeforces.com/contest/2113/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll calculate(ll k, const ll a, const ll x, const ll b, const ll y)
{
    ll ans = k >= a ? (k - a) / x + 1 : 0;
    k -= ans * x;
    const ll z = k >= b ? (k - b) / y + 1 : 0;
    ans += z;
    return ans;
}

void solve()
{
    ll k, a, b, x, y;
    cin >> k >> a >> b >> x >> y;
    const ll c = calculate(k, a, x, b, y), d = calculate(k, b, y, a, x), ans = max(c, d);
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