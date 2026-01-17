// Problem: Paint the Array
// Link to the problem: https://codeforces.com/contest/1618/problem/C
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
    bool z = true;
    ll x = a[0], y = a[1];
    for (ll i = 2; i < n; i++)
    {
        if (i % 2 == 0)
        {
            x = __gcd(x, a[i]);
        }
        else
        {
            y = __gcd(y, a[i]);
        }
    }
    for (int i = 0; i < n; i += 2)
    {
        if (a[i] % y == 0)
        {
            z = false;
            break;
        }
    }
    if (z == true)
    {
        cout << y << endl;
        return;
    }
    z = true;
    for (int i = 1; i < n; i += 2)
    {
        if (a[i] % x == 0)
        {
            z = false;
            break;
        }
    }
    if (z == true)
    {
        cout << x << endl;
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