// Problem: Omkar and Password
// Link to the problem: https://codeforces.com/contest/1392/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, mn = LLONG_MAX, mx = LLONG_MIN;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mn = min(mn, x);
        mx = max(mx, x);
    }
    if (mx == mn)
    {
        cout << n << endl;
    }
    else
    {
        cout << 1 << endl;
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