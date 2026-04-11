// Problem: Omkar and Infinity Clock
// Link to the problem: https://codeforces.com/contest/1392/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    vector<pair<ll, ll>> ans(n);
    for (ll i = 0; i < n; i++)
    {
        a[i] = mx - a[i];
        ans[i].first = a[i];
    }
    mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        ans[i].second = mx - a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (k & 1)
        {
            cout << ans[i].first << " ";
        }
        else
        {
            cout << ans[i].second << " ";
        }
    }
    cout << endl;
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