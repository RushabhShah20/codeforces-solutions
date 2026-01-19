// Problem: We Need the Zero
// Link to the problem: https://codeforces.com/contest/1805/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ans ^= x;
    }
    if (n % 2 == 0)
    {
        if (ans == 0)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        cout << ans << endl;
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