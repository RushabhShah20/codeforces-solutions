// Problem: Game of Division
// Link to the problem: https://codeforces.com/contest/2040/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    unordered_map<ll, pair<ll, ll>> m;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x % k].second++;
        m[x % k].first = min(m[x % k].first, -i - 1);
    }
    for (const pair<ll, pair<ll, ll>> i : m)
    {
        if (i.second.second == 1)
        {
            cout << "YES" << endl;
            cout << -i.second.first << endl;
            return;
        }
    }
    cout << "NO" << endl;
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