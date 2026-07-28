// Problem: Pupils Redistribution
// Link to the problem: https://codeforces.com/contest/779/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(5);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x - 1].first++;
    }
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x - 1].second++;
    }
    ll y = 0;
    for (ll i = 0; i < 5; i++)
    {
        if (a[i].first + a[i].second & 1)
        {
            cout << -1 << endl;
            return;
        }
        y += abs(a[i].first - a[i].second) / 2;
    }
    const ll ans = y / 2;
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