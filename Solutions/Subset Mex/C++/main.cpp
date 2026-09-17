// Problem: Subset Mex
// Link to the problem: https://codeforces.com/contest/1406/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(102);
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        a[z]++;
    }
    ll x = 0, y = 0;
    while (a[x] >= 2)
    {
        x++;
    }
    y = x;
    while (a[y] >= 1)
    {
        y++;
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