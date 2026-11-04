// Problem: Vitamins
// Link to the problem: https://codeforces.com/contest/1042/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<string, ll> m;
    m["A"] = 1000000000;
    m["B"] = 1000000000;
    m["C"] = 1000000000;
    m["AB"] = 1000000000;
    m["AC"] = 1000000000;
    m["BC"] = 1000000000;
    m["ABC"] = 1000000000;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        string s;
        cin >> k >> s;
        sort(s.begin(), s.end());
        m[s] = min(m[s], k);
    }
    ll x = 1000000000;
    x = min(x, m["A"] + m["B"] + m["C"]);
    x = min(x, m["AB"] + m["C"]);
    x = min(x, m["AC"] + m["B"]);
    x = min(x, m["BC"] + m["A"]);
    x = min(x, m["AB"] + m["AC"]);
    x = min(x, m["AB"] + m["BC"]);
    x = min(x, m["AC"] + m["BC"]);
    x = min(x, m["ABC"]);
    const ll ans = x == 1000000000 ? -1 : x;
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