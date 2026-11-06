// Problem: Histogram Ugliness
// Link to the problem: https://codeforces.com/contest/1534/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 2);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        const ll x = max(a[i - 1], a[i + 1]);
        if (a[i] > x)
        {
            ans += a[i] - x;
            a[i] = x;
        }
    }
    for (ll i = 1; i <= n + 1; i++)
    {
        ans += abs(a[i] - a[i - 1]);
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