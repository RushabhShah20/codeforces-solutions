// Problem: Dishonest Sellers
// Link to the problem: https://codeforces.com/contest/779/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    vector<pair<ll, ll>> c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        c[i] = {a[i], b[i]};
    }
    sort(c.begin(), c.end(), [](const pair<ll, ll> &x, const pair<ll, ll> &y)
         { return x.first - x.second < y.first - y.second; });
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i < k || c[i].first <= c[i].second)
        {
            ans += c[i].first;
        }
        else
        {
            ans += c[i].second;
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