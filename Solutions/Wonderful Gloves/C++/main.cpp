// Problem: Wonderful Gloves
// Link to the problem: https://codeforces.com/contest/2096/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> l(n), r(n), a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> r[i];
    }
    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        ans += max(l[i], r[i]);
        a[i] = min(l[i], r[i]);
    }
    sort(a.begin(), a.end(), greater<>());
    for (ll i = 0; i < k - 1; i++)
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