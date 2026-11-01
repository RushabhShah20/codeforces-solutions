// Problem: Even Modulo Pair
// Link to the problem: https://codeforces.com/contest/2164/problem/B
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
    ll x = -1, y = -1;
    bool z = false;
    for (ll i = 1; i < n; i++)
    {
        for (ll j = 0; j < i; j++)
        {
            if (z)
            {
                break;
            }
            if (a[i] % a[j] & 1)
            {
                continue;
            }
            z = true;
            x = a[j];
            y = a[i];
        }
    }
    if (z)
    {
        cout << x << " " << y << endl;
    }
    else
    {
        cout << -1 << endl;
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