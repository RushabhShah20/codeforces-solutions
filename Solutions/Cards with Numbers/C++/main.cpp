// Problem: Cards with Numbers
// Link to the problem: https://codeforces.com/contest/254/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, vector<ll>> m;
    for (ll i = 0; i < 2 * n; i++)
    {
        ll x;
        cin >> x;
        m[x].push_back(i + 1);
    }
    for (const pair<ll, vector<ll>> i : m)
    {
        if (i.second.size() & 1)
        {
            cout << -1 << endl;
            return;
        }
    }
    for (const pair<ll, vector<ll>> i : m)
    {
        for (ll j = 0; j < i.second.size(); j += 2)
        {
            cout << i.second[j] << " " << i.second[j + 1] << endl;
        }
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}