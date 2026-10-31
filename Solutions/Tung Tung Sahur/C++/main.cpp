// Problem: Tung Tung Sahur
// Link to the problem: https://codeforces.com/contest/2094/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    const ll n = a.size(), m = b.size();
    vector<pair<char, ll>> c, d;
    ll x = 1;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            x++;
        }
        else
        {
            c.push_back({a[i - 1], x});
            x = 1;
        }
    }
    c.push_back({a[n - 1], x});
    x = 1;
    for (ll i = 1; i < m; i++)
    {
        if (b[i] == b[i - 1])
        {
            x++;
        }
        else
        {
            d.push_back({b[i - 1], x});
            x = 1;
        }
    }
    d.push_back({b[m - 1], x});
    const ll p = c.size(), q = d.size();
    if (p != q)
    {
        cout << "NO" << endl;
        return;
    }
    for (ll i = 0; i < p; i++)
    {
        if (c[i].first != d[i].first || c[i].second > d[i].second || (c[i].second << 1) < d[i].second)
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