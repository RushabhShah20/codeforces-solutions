// Problem: One and Two
// Link to the problem: https://codeforces.com/contest/1788/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 2)
        {
            x++;
        }
    }
    if (x % 2 != 0)
    {
        cout << -1 << endl;
        return;
    }
    ll y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 2)
        {
            y++;
        }
        if (2 * y == x)
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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