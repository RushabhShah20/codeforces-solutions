// Problem: Even-Odd Increments
// Link to the problem: https://codeforces.com/contest/1744/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a = 0, b = 0, ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ans += x;
        a += x & 1 ? 1 : 0;
        b += x & 1 ? 0 : 1;
    }
    for (ll i = 0; i < k; i++)
    {
        ll x, y;
        cin >> x >> y;
        ans += (x == 0 ? b : a) * y;
        if (y & 1)
        {
            if (x == 0)
            {
                a += b;
                b = 0;
            }
            else
            {
                b += a;
                a = 0;
            }
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