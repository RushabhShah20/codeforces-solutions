// Problem: Carrot Chopdown (Easy Version)
// Link to the problem: https://codeforces.com/contest/2258/problem/B1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m + 1), b(m + 1);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x]++;
    }
    b[m] = a[m];
    for (ll i = m - 1; i >= 1; i--)
    {
        b[i] += b[i + 1] + a[i];
    }
    ll ans = 0;
    for (ll i = 1; i <= m; i++)
    {
        ans = max(ans, b[i] + (i << 1 <= m ? a[i << 1] : 0));
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