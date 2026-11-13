// Problem: Balls of Steel
// Link to the problem: https://codeforces.com/contest/1450/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    for (ll i = 0; i < n; i++)
    {
        ll x = 0;
        for (ll j = 0; j < n; j++)
        {
            x = max(x, abs(a[i].first - a[j].first) + abs(a[i].second - a[j].second));
        }
        if (x <= k)
        {
            cout << 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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