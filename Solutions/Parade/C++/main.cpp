// Problem: Parade
// Link to the problem: https://codeforces.com/contest/733/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        x += v[i].first;
        y += v[i].second;
    }
    ll ans = 0, z = abs(x - y);
    for (ll i = 0; i < n; i++)
    {
        const ll a = x - v[i].first + v[i].second, b = y - v[i].second + v[i].first, c = abs(a - b);
        if (c > z)
        {
            z = c;
            ans = i + 1;
        }
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