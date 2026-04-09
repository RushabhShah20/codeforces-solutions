// Problem: Most Similar Words
// Link to the problem: https://codeforces.com/contest/1676/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll minCost(const string a, const string b, const ll m)
{
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        ans += abs(a[i] - b[i]);
    }
    return ans;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    ll ans = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            ans = min(ans, minCost(s[i], s[j], m));
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}