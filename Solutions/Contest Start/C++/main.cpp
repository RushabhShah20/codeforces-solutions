// Problem: Contest Start
// Link to the problem: https://codeforces.com/contest/1539/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, t;
    cin >> n >> x >> t;
    const ll a = t / x, b = min(n - 1, a), c = max(0LL, n - 1 - a);
    const ll ans = c * a + ((b * (b + 1)) >> 1);
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