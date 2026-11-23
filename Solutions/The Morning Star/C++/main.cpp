// Problem: The Morning Star
// Link to the problem: https://codeforces.com/contest/1850/problem/G
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> a, b, c, d;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        a[x]++;
        b[y]++;
        c[x + y]++;
        d[x - y]++;
    }
    ll ans = 0;
    for (const pair<ll, ll> i : a)
    {
        ans += i.second * (i.second - 1);
    }
    for (const pair<ll, ll> i : b)
    {
        ans += i.second * (i.second - 1);
    }
    for (const pair<ll, ll> i : c)
    {
        ans += i.second * (i.second - 1);
    }
    for (const pair<ll, ll> i : d)
    {
        ans += i.second * (i.second - 1);
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