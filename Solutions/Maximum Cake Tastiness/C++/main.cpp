// Problem: Maximum Cake Tastiness
// Link to the problem: https://codeforces.com/contest/1654/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = LLONG_MIN, y = LLONG_MIN;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z > x)
        {
            y = x;
            x = z;
        }
        else if (z > y)
        {
            y = z;
        }
    }
    const ll ans = x + y;
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