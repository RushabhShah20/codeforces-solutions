// Problem: 2048 Game
// Link to the problem: https://codeforces.com/contest/1221/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(30, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[log2(x)]++;
    }
    for (ll i = 1; i < 12; i++)
    {
        a[i] += a[i - 1] >> 1;
    }
    const string ans = a[11] > 0 ? "YES" : "NO";
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