// Problem: Required Remainder
// Link to the problem: https://codeforces.com/contest/1374/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, n;
    cin >> x >> y >> n;
    if (n % x == y)
    {
        cout << n << endl;
    }
    else
    {
        ll ans = max((n / x) * x + y, ((n / x) * x) - (x - y));
        if (ans > n)
        {
            ans -= x;
        }
        cout << ans << endl;
    }
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