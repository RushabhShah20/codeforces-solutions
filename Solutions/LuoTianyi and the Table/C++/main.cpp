// Problem: LuoTianyi and the Table
// Link to the problem: https://codeforces.com/contest/1825/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    const ll k = n * m;
    ll mn1 = LLONG_MAX, mn2 = LLONG_MAX, mx1 = LLONG_MIN, mx2 = LLONG_MAX;
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        if (x < mn1)
        {
            mn2 = mn1;
            mn1 = x;
        }
        else if (x < mn2)
        {
            mn2 = x;
        }
        if (x > mx1)
        {
            mx2 = mx1;
            mx1 = x;
        }
        else if (x > mx2)
        {
            mx2 = x;
        }
    }
    const ll a = min(n, m), b = max(n, m), c = (mx1 - mn1) * (a * b - a) + (mx1 - mn2) * (a - 1), d = (mx1 - mn1) * (a * b - a) + (mx2 - mn1) * (a - 1), ans = max(c, d);
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