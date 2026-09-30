// Problem: Recent Actions
// Link to the problem: https://codeforces.com/contest/1799/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> ans(n, -1);
    unordered_set<ll> s;
    ll y = n - 1;
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        if (x <= n || s.count(x))
        {
            continue;
        }
        s.insert(x);
        if (y >= 0)
        {
            ans[y] = i + 1;
            y--;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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