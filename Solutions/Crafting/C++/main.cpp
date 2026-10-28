// Problem: Crafting
// Link to the problem: https://codeforces.com/contest/2055/problem/B
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
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            x++;
            y = b[i] - a[i];
        }
    }
    if (x == 0)
    {
        cout << "YES" << endl;
        return;
    }
    if (x > 1)
    {
        cout << "NO" << endl;
        return;
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] >= b[i] && a[i] - b[i] < y)
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