// Problem: Kevin and Arithmetic
// Link to the problem: https://codeforces.com/contest/2061/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> o, e;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x & 1)
        {
            o.push_back(x);
        }
        else
        {
            e.push_back(x);
        }
    }
    ll ans = 0, x = 0;
    for (const ll i : e)
    {
        x += i;
        bool y = false;
        while (!(x & 1))
        {
            y = true;
            x >>= 1;
        }
        if (y)
        {
            ans++;
        }
    }
    for (const ll i : o)
    {
        x += i;
        bool y = false;
        while (!(x & 1))
        {
            y = true;
            x >>= 1;
        }
        if (y)
        {
            ans++;
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