// Problem: Consecutive Sum
// Link to the problem: https://codeforces.com/contest/1733/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i % k] = max(a[i % k], x);
    }
    ll ans = 0;
    for (ll i = 0; i < k; i++)
    {
        ans += a[i];
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