// Problem: Farmer John's Card Game
// Link to the problem: https://codeforces.com/contest/2060/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<vector<ll>, ll>> a(n, pair<vector<ll>, ll>{vector<ll>(m), 0});
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i].first[j];
        }
        sort(a[i].first.begin(), a[i].first.end());
        a[i].second = i + 1;
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 1; j < m; j++)
        {
            if (a[i].first[j] - a[i].first[j - 1] != n)
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    sort(a.begin(), a.end(), [](const pair<vector<ll>, ll> &x, const pair<vector<ll>, ll> &y)
         { return x.first[0] < y.first[0]; });
    for (ll i = 0; i < n; i++)
    {
        cout << a[i].second << " ";
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