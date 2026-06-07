// Problem: Traveling Salesman Problem
// Link to the problem: https://codeforces.com/contest/1713/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    ans = abs(a[0].first) + abs(a[0].second);
    for (ll i = 1; i < n; i++)
    {
        ans += abs(a[i].first - a[i - 1].first) + abs(a[i].second - a[i - 1].second);
    }
    ans += abs(a[n - 1].first) + abs(a[n - 1].second);
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