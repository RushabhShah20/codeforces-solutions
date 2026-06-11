// Problem: Interesting Sum
// Link to the problem: https://codeforces.com/contest/1720/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll mx1 = LLONG_MIN, mx2 = LLONG_MIN, mn1 = LLONG_MAX, mn2 = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > mx1)
        {
            mx2 = mx1;
            mx1 = x;
        }
        else if (x > mx2)
        {
            mx2 = x;
        }
        if (x < mn1)
        {
            mn2 = mn1;
            mn1 = x;
        }
        else if (x < mn2)
        {
            mn2 = x;
        }
    }
    const ll ans = mx1 - mn1 + mx2 - mn2;
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