// Problem: Email from Polycarp
// Link to the problem: https://codeforces.com/contest/1185/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size(), m = t.size();
    vector<pair<char, ll>> a, b;
    ll x = 1;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            x++;
        }
        else
        {
            a.push_back({s[i - 1], x});
            x = 1;
        }
    }
    a.push_back({s[n - 1], x});
    x = 1;
    for (ll i = 1; i < m; i++)
    {
        if (t[i] == t[i - 1])
        {
            x++;
        }
        else
        {
            b.push_back({t[i - 1], x});
            x = 1;
        }
    }
    b.push_back({t[m - 1], x});
    const ll y = a.size(), z = b.size();
    if (y != z)
    {
        cout << "NO" << endl;
        return;
    }
    for (ll i = 0; i < z; i++)
    {
        if (a[i].first != b[i].first || a[i].second > b[i].second)
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