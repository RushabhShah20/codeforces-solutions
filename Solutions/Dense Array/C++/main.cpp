// Problem: Dense Array
// Link to the problem: https://codeforces.com/contest/1490/problem/A
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
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        const ll x = a[i], y = a[i - 1], b = max(x, y);
        ll c = min(x, y);
        if (b > 2 * c)
        {
            while (b > 2 * c)
            {
                ans++;
                c *= 2;
            }
        }
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