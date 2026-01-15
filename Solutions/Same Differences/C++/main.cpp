// Problem: Same Differences
// Link to the problem: https://codeforces.com/contest/1520/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i] - i]++;
    }
    ll ans = 0;
    for (const pair<ll, ll> i : m)
    {
        ans += (((i.second) * (i.second - 1)) / 2);
    }
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