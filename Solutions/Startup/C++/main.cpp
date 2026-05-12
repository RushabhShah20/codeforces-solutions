// Problem: Startup
// Link to the problem: https://codeforces.com/contest/2036/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    unordered_map<ll, ll> m;
    for (ll i = 0; i < k; i++)
    {
        ll b, c;
        cin >> b >> c;
        m[b] += c;
    }
    vector<pair<ll, ll>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [](const pair<ll, ll> &a, const pair<ll, ll> &b)
         { return a.second > b.second; });
    ll ans = 0;
    for (ll i = 0; i < min(n, (ll)v.size()); i++)
    {
        ans += v[i].second;
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