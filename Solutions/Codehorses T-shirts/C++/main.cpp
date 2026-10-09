// Problem: Codehorses T-shirts
// Link to the problem: https://codeforces.com/contest/1000/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<string, pair<ll, ll>> m;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s].first++;
    }
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s].second++;
    }
    ll x = 0;
    for (const pair<string, pair<ll, ll>> i : m)
    {
        x += abs(i.second.first - i.second.second);
    }
    const ll ans = x >> 1;
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}