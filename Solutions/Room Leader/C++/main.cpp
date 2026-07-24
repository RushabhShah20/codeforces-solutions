// Problem: Room Leader
// Link to the problem: https://codeforces.com/contest/74/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<string, ll>> v(n);
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ll x, y, a, b, c, d, e;
        cin >> x >> y >> a >> b >> c >> d >> e;
        v[i] = {s, 100 * x - 50 * y + a + b + c + d + e};
    }
    ll mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        mx = max(mx, v[i].second);
    }
    for (ll i = 0; i < n; i++)
    {
        if (mx == v[i].second)
        {
            cout << v[i].first << endl;
            return;
        }
    }
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