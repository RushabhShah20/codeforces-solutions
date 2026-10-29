// Problem: The Cunning Seller (easy version)
// Link to the problem: https://codeforces.com/contest/2132/problem/C1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    while (n > 0)
    {
        const ll x = logl(n) / logl(3LL);
        ans += (powl(3, x + 1) + x * powl(3, x - 1));
        n -= powl(3, x);
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