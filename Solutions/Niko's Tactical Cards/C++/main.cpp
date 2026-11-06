// Problem: Niko's Tactical Cards
// Link to the problem: https://codeforces.com/contest/2173/problem/B
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
        cin >> b[i];
    }
    ll c = 0, d = 0;
    for (ll i = 0; i < n; i++)
    {
        const ll x = max(c - a[i], b[i] - d), y = min(d - a[i], b[i] - c);
        c = x;
        d = y;
    }
    const ll ans = c;
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