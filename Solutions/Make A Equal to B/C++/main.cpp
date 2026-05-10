// Problem: Make A Equal to B
// Link to the problem: https://codeforces.com/contest/1736/problem/A
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
    ll x = 0, y = 0, z = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            x++;
        }
        if (a[i] == 1)
        {
            y++;
        }
        if (b[i] == 1)
        {
            z++;
        }
    }
    const ll ans = min(x, abs(y - z) + 1);
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