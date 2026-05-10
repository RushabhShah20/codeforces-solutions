// Problem: Walking Boy
// Link to the problem: https://codeforces.com/contest/1776/problem/A
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
    }
    x += a[0] / 120;
    for (ll i = 1; i < n; i++)
    {
        x += (a[i] - a[i - 1]) / 120;
    }
    x += (1440 - a[n - 1]) / 120;
    const string ans = x >= 2 ? "YES" : "NO";
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