// Problem: No Casino in the Mountains
// Link to the problem: https://codeforces.com/contest/2126/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            x++;
        }
        else
        {
            x = 0;
        }
        if (x > k)
        {
            a[i] = 1;
            x = 0;
        }
    }
    x = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            x++;
        }
        else
        {
            x = 0;
        }
        if (x == k)
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