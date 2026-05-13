// Problem: TubeTube Feed
// Link to the problem: https://codeforces.com/contest/1822/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] += i;
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<bool> c(n, false);
    for (ll i = 0; i < n; i++)
    {
        if (a[i] <= k)
        {
            c[i] = true;
        }
    }
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        if (c[i])
        {
            mx = max(mx, b[i]);
        }
    }
    if (mx == 0)
    {
        cout << -1 << endl;
        return;
    }
    for (ll i = 0; i < n; i++)
    {
        if (c[i] && b[i] == mx)
        {
            cout << i + 1 << endl;
            return;
        }
    }
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