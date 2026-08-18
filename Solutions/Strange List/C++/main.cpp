// Problem: Strange List
// Link to the problem: https://codeforces.com/contest/1471/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n, 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        ll x = a[i], y = 1;
        while (x % k == 0)
        {
            y++;
            x /= k;
        }
        b[i] = y;
    }
    ll mn = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        mn = min(mn, b[i]);
    }
    bool x = false;
    for (ll i = 0; i < n; i++)
    {
        if (b[i] == mn)
        {
            x = true;
        }
        if (x)
        {
            b[i] = mn;
        }
        else
        {
            b[i] = mn + 1;
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += a[i] * b[i];
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