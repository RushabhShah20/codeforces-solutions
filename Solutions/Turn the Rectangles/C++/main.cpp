// Problem: Turn the Rectangles
// Link to the problem: https://codeforces.com/contest/1008/problem/B
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
    ll x = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll mx = max(a[i].first, a[i].second), mn = min(a[i].first, a[i].second);
        if (mx <= x)
        {
            x = mx;
        }
        else if (mn <= x)
        {
            x = mn;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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