// Problem: Oleg and shares
// Link to the problem: https://codeforces.com/contest/793/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll mn = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    ll g = a[0] - mn;
    for (ll i = 1; i < n; i++)
    {
        g = __gcd(g, a[i] - mn);
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (g % k != 0)
    {
        cout << -1 << endl;
        return;
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += (a[i] - mn) / k;
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