// Problem: Arrival of the General
// Link to the problem: https://codeforces.com/contest/144/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, mn = LLONG_MAX, mx = LLONG_MIN;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    ll x = n - 1, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (mx == a[i])
        {
            x = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (mn == a[i])
        {
            y = i;
            break;
        }
    }
    ll ans;
    if (x < y)
    {
        ans = x + (n - 1 - y);
    }
    else
    {
        ans = x + (n - 1 - y) - 1;
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
    solve();
    return 0;
}