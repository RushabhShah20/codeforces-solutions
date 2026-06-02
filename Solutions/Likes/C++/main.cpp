// Problem: Likes
// Link to the problem: https://codeforces.com/contest/1802/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z > 0)
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    for (ll i = 1; i < x; i++)
    {
        cout << i << " ";
    }
    for (ll i = x; i >= x - y; i--)
    {
        cout << i << " ";
    }
    cout << endl;
    for (ll i = 1; i <= 2 * y; i++)
    {
        cout << (i & 1) << " ";
    }
    for (ll i = 1; i <= n - 2 * y; i++)
    {
        cout << i << " ";
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