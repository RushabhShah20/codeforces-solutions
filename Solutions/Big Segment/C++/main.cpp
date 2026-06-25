// Problem: Big Segment
// Link to the problem: https://codeforces.com/contest/242/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    ll x = LLONG_MAX, y = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        x = min(x, v[i].first);
        y = max(y, v[i].second);
    }
    for (ll i = 0; i < n; i++)
    {
        if (v[i].first == x && v[i].second == y)
        {
            cout << i + 1 << endl;
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
    solve();
    return 0;
}