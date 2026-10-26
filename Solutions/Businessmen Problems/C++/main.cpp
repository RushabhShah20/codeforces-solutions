// Problem: Businessmen Problems
// Link to the problem: https://codeforces.com/contest/981/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> k;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        k[x] = max(k[x], y);
    }
    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        k[x] = max(k[x], y);
    }
    ll ans = 0;
    for (const pair<ll, ll> i : k)
    {
        ans += i.second;
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