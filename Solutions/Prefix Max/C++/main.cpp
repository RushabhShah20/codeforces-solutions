// Problem: Prefix Max
// Link to the problem: https://codeforces.com/contest/2185/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, maxVal = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        maxVal = max(maxVal, x);
    }
    const ll ans = n * maxVal;
    cout << ans << endl;
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