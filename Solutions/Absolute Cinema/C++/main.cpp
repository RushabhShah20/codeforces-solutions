// Problem: Absolute Cinema
// Link to the problem: https://codeforces.com/contest/2229/problem/B
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
    for (ll i = 0; i < n; i++)
    {
        if (a[i] >= b[i])
        {
            swap(a[i], b[i]);
        }
    }
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        x = max(x, a[i]);
        y += b[i];
    }
    const ll ans = x + y;
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