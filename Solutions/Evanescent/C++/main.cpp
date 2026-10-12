// Problem: Evanescent
// Link to the problem: https://codeforces.com/contest/2254/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll x = 1;
    vector<pair<char, ll>> a;
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
    const ll m = a.size();
    bool y = false, z = false;
    for (ll i = 1; i < m - 1; i++)
    {
        if (a[i].second == 1)
        {
            y = true;
            if (a[i - 1].first == a[i + 1].first)
            {
                z = true;
            }
        }
    }
    const ll ans = y ? (z ? m - 2 : m - 1) : m;
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