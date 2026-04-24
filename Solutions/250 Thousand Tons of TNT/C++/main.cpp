// Problem: 250 Thousand Tons of TNT
// Link to the problem: https://codeforces.com/contest/1899/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b(n);
    b[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        b[i] = b[i - 1] + a[i];
    }
    vector<ll> c;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            c.push_back(i);
            if (i != n / i)
            {
                c.push_back(n / i);
            }
        }
    }
    for (ll i = 0; i < c.size(); i++)
    {
        ll mn = b[c[i] - 1], mx = b[c[i] - 1];
        for (ll j = c[i] - 1 + c[i]; j < n; j += c[i])
        {
            const ll x = b[j] - b[j - c[i]];
            mn = min(mn, x);
            mx = max(mx, x);
        }
        ans = max(ans, mx - mn);
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