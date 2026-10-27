// Problem: Need More Arrays
// Link to the problem: https://codeforces.com/contest/2114/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 1, y = -1;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (y == -1)
        {
            y = x;
        }
        if (abs(y - x) > 1)
        {
            ans++;
            y = x;
        }
    }
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