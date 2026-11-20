// Problem: Black Circles
// Link to the problem: https://codeforces.com/contest/2002/problem/C
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
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    const long double z = sqrtl((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    for (ll i = 0; i < n; i++)
    {
        const long double w = sqrtl((a[i].first - x2) * (a[i].first - x2) + (a[i].second - y2) * (a[i].second - y2));
        if (w <= z)
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}