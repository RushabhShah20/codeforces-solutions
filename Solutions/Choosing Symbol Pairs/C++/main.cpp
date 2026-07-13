// Problem: Choosing Symbol Pairs
// Link to the problem: https://codeforces.com/contest/50/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    unordered_map<char, ll> m;
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    ll ans = 0;
    for (const pair<char, ll> i : m)
    {
        ans += i.second * i.second;
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