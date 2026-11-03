// Problem: Minimum Product
// Link to the problem: https://codeforces.com/contest/1409/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll product(ll a, ll b, const ll x, const ll y, ll n)
{
    const ll c = min(a - x, n);
    a -= c;
    n -= c;
    const ll d = min(b - y, n);
    b -= d;
    return a * b;
}

void solve()
{
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    const ll ans = min(product(a, b, x, y, n), product(b, a, y, x, n));
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