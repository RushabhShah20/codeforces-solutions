// Problem: Another Sorting Problem
// Link to the problem: https://codeforces.com/contest/2231/problem/B
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
    vector<ll> b(n);
    b[0] = 0;
    ll x = a[0];
    for (ll i = 1; i < n; i++)
    {
        x = max(x, a[i]);
        b[i] = x - a[i];
    }
    ll y = 0;
    for (ll i = 0; i < n; i++)
    {
        y = max(y, b[i]);
    }
    for (ll i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            a[i] += y;
        }
    }
    for (ll i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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