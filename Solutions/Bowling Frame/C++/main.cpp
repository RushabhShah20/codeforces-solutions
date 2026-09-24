// Problem: Bowling Frame
// Link to the problem: https://codeforces.com/contest/2041/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    const ll k = a + b;
    ll ans = 0, l = 0, r = 2000000000;
    while (l <= r)
    {
        const ll m = l + (r - l) / 2;
        if ((m * (m + 1)) >> 1 <= k)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
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