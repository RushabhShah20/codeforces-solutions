// Problem: Ohana Cleans Up
// Link to the problem: https://codeforces.com/contest/554/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<string, ll> m;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    ll ans = 0;
    for (const pair<string, ll> i : m)
    {
        ans = max(ans, i.second);
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
    solve();
    return 0;
}