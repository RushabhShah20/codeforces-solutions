// Problem: Wonderful Coloring - 1
// Link to the problem: https://codeforces.com/contest/1551/problem/B1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    unordered_map<char, ll> m;
    for (ll i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    ll ans = 0, x = 0;
    for (const pair<char, ll> i : m)
    {
        if (i.second > 1)
        {
            ans++;
        }
        else
        {
            x++;
        }
    }
    ans += x / 2;
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