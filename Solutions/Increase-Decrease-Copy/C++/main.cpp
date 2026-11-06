// Problem: Increase/Decrease/Copy
// Link to the problem: https://codeforces.com/contest/1976/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n + 1);
    bool x = false;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i <= n; i++)
    {
        cin >> b[i];
    }
    ll c = LLONG_MAX, d = 0;
    for (ll i = 0; i < n; i++)
    {
        d += abs(a[i] - b[i]);
        const ll y = min(a[i], b[i]), z = max(a[i], b[i]);
        if (b[n] >= y && b[n] <= z)
        {
            x = true;
        }
        c = min(c, abs(a[i] - b[n]));
        c = min(c, abs(b[i] - b[n]));
    }
    const ll ans = d + (x ? 1 : c + 1);
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