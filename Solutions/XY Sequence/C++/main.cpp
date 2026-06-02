// Problem: XY Sequence
// Link to the problem: https://codeforces.com/contest/1657/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, x, y;
    cin >> n >> k >> x >> y;
    ll ans = 0, z = 0;
    for (ll i = 0; i < n; i++)
    {
        if (z + x > k)
        {
            z -= y;
        }
        else
        {
            z += x;
        }
        ans += z;
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