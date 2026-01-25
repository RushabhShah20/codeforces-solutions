// Problem: Desorting
// Link to the problem: https://codeforces.com/contest/1853/problem/A
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
    if (is_sorted(a.begin(), a.end()))
    {
        ll d = INT_MAX;
        for (ll i = 1; i < n; i++)
        {
            const ll x = a[i] - a[i - 1];
            if (x >= 0)
            {
                d = min(d, x);
            }
        }
        const ll ans = (d / 2) + 1;
        cout << ans << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}