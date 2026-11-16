// Problem: Make it Zigzag
// Link to the problem: https://codeforces.com/contest/2154/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        b[i] = i == 0 ? a[i] : max(b[i - 1], a[i]);
    }
    ll ans = 0;
    for (ll i = 0; i < n; i += 2)
    {
        ll x = -1;
        if (i > 0)
        {
            x = max(x, a[i] - b[i - 1]);
        }
        if (i < n - 1)
        {
            x = max(x, a[i] - b[i + 1]);
        }
        ans += x + 1;
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