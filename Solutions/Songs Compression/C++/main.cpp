// Problem: Songs Compression
// Link to the problem: https://codeforces.com/contest/10/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> a(n);
    ll y = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        y += a[i].first;
    }
    sort(a.begin(), a.end(), [](const pair<ll, ll> &p, const pair<ll, ll> &q)
         { return p.first - p.second > q.first - q.second; });
    ll z = 0;
    for (ll i = 0; i < n; i++)
    {
        if (y <= x)
        {
            cout << z << endl;
            return;
        }
        z++;
        y -= a[i].first - a[i].second;
    }
    const ll ans = y <= x ? z : -1;
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