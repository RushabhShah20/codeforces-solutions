// Problem: Choose the Different Ones!
// Link to the problem: https://codeforces.com/contest/1927/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<pair<ll, ll>> a(k);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x <= k)
        {
            a[x - 1].first++;
        }
    }
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        if (x <= k)
        {
            a[x - 1].second++;
        }
    }
    ll x = 0, y = 0, z = 0;
    for (ll i = 0; i < k; i++)
    {
        if (a[i].first > 0 && a[i].second > 0)
        {
            x++;
        }
        else if (a[i].first == 0 && a[i].second > 0)
        {
            y++;
        }
        else if (a[i].first > 0 && a[i].second == 0)
        {
            z++;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    const ll w = k >> 1;
    const string ans = x + y + z != k || y > w || z > w ? "NO" : "YES";
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