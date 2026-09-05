// Problem: Boss Fight
// Link to the problem: https://codeforces.com/contest/2252/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> m;
    ll a = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
        a += x;
    }
    ll x = 0, y = 0;
    for (const pair<ll, ll> i : m)
    {
        if (i.second > x)
        {
            x = i.second;
            y = i.first;
        }
    }
    const ll ans = a - (y * (x - min(x, n - x + 2)));
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