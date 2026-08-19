// Problem: Threshold Movement
// Link to the problem: https://codeforces.com/contest/2250/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll mn = LLONG_MAX, mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i & 1)
        {
            mx = max(mx, x);
        }
        else
        {
            mn = min(mn, x);
        }
    }
    if (n & 1)
    {
        cout << "NO" << endl;
        return;
    }
    const string ans = mx + 1 < mn ? "YES" : "NO";
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