// Problem: Mr. Perfectly Fine
// Link to the problem: https://codeforces.com/contest/1829/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> f(4);
    for (ll i = 0; i < n; i++)
    {
        ll m;
        string s;
        cin >> m >> s;
        if (s == "00")
        {
            f[0].push_back(m);
        }
        else if (s == "01")
        {
            f[1].push_back(m);
        }
        else if (s == "10")
        {
            f[2].push_back(m);
        }
        else
        {
            f[3].push_back(m);
        }
    }
    ll ans = INT_MAX;
    if (!f[1].empty() && !f[2].empty())
    {
        ans = min(ans, *min_element(f[1].begin(), f[1].end()) + *min_element(f[2].begin(), f[2].end()));
    }
    if (!f[3].empty())
    {
        ans = min(ans, *min_element(f[3].begin(), f[3].end()));
    }
    cout << ((ans == INT_MAX) ? (-1) : (ans)) << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}