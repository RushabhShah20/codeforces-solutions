// Problem: Phoenix and Gold
// Link to the problem: https://codeforces.com/contest/1515/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    if (x == k)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    ll y = 0;
    for (ll i = 0; i < n; i++)
    {
        y += a[i];
        if (y == k)
        {
            swap(a[i], a[i + 1]);
            y -= a[i + 1];
            y += a[i];
        }
        cout << a[i] << " ";
    }
    cout << endl;
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