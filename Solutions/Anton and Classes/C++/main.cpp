// Problem: Anton and Classes
// Link to the problem: https://codeforces.com/contest/785/problem/B
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
        ll l, r;
        cin >> l >> r;
        mx1 = max(mx1, l);
        mn1 = min(mn1, r);
    }
    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll l, r;
        cin >> l >> r;
        mx2 = max(mx2, l);
        mn2 = min(mn2, r);
    }
    const ll ans = max(0LL, max(mx1 - mn2, mx2 - mn1));
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