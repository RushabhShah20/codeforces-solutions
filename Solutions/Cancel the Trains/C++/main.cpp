// Problem: Cancel the Trains
// Link to the problem: https://codeforces.com/contest/1453/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    unordered_map<ll, ll> m;
    for (ll i = 0; i < a; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
    }
    for (ll i = 0; i < b; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
    }
    ll ans = 0;
    for (const pair<ll, ll> i : m)
    {
        if (i.second > 1)
        {
            ans++;
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