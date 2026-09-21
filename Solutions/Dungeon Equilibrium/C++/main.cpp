// Problem: Dungeon Equilibrium
// Link to the problem: https://codeforces.com/contest/2157/problem/A
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    ll ans = 0;
    for (pair<ll, ll> i : m)
    {
        if (i.second < i.first)
        {
            ans += i.second;
        }
        else if (i.second > i.first)
        {
            ans += (i.second - i.first);
        }
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