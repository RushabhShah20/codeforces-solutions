// Problem: Alexey and Train
// Link to the problem: https://codeforces.com/contest/1501/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll x = v[i].first - v[i - 1].second + a[i];
        if (i == 1)
        {
            x = v[1].first + a[1];
        }
        ans += x;
        if (i == n)
        {
            break;
        }
        const ll y = (v[i].second - v[i].first + 1) / 2;
        ans = max(v[i].second, ans + y);
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