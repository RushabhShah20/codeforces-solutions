// Problem: Alternating Subsequence
// Link to the problem: https://codeforces.com/contest/1343/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0, x = LLONG_MIN, y = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            if (y != LLONG_MIN)
            {
                ans += y;
                y = LLONG_MIN;
            }
            x = max(x, a[i]);
        }
        else
        {
            if (x != LLONG_MIN)
            {
                ans += x;
                x = LLONG_MIN;
            }
            y = max(y, a[i]);
        }
    }
    if (y != LLONG_MIN)
    {
        ans += y;
        y = LLONG_MIN;
    }
    if (x != LLONG_MIN)
    {
        ans += x;
        x = LLONG_MIN;
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