// Problem: Matchmaker
// Link to the problem: https://codeforces.com/contest/159/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    map<ll, ll> a1, a2;
    map<pair<ll, ll>, ll> b1, b2;
    for (ll i = 0; i < n; i++)
    {
        ll c, d;
        cin >> c >> d;
        a1[d]++;
        b1[{c, d}]++;
    }
    for (ll i = 0; i < m; i++)
    {
        ll c, d;
        cin >> c >> d;
        a2[d]++;
        b2[{c, d}]++;
    }
    ll x = 0, y = 0;
    for (ll i = 1; i <= 1000; i++)
    {
        x += min(a1[i], a2[i]);
    }
    for (const pair<pair<ll, ll>, ll> i : b1)
    {
        if (b2.count(i.first))
        {
            y += min(i.second, b2[i.first]);
        }
    }
    cout << x << " " << y << endl;
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