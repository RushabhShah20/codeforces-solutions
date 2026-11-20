// Problem: Watchmen
// Link to the problem: https://codeforces.com/contest/650/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> a, b;
    map<pair<ll, ll>, ll> c;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        a[x]++;
        b[y]++;
        c[{x, y}]++;
    }
    ll ans = 0;
    for (const pair<ll, ll> i : a)
    {
        const ll x = i.second;
        ans += (x * (x - 1)) >> 1;
    }
    for (const pair<ll, ll> i : b)
    {
        const ll x = i.second;
        ans += (x * (x - 1)) >> 1;
    }
    for (const pair<pair<ll, ll>, ll> i : c)
    {
        const ll x = i.second;
        ans -= (x * (x - 1)) >> 1;
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
    solve();
    return 0;
}