// Problem: Distinct Split
// Link to the problem: https://codeforces.com/contest/1791/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    set<char> c;
    vector<ll> prefix(n, 1), suffix(n, 1);
    c.insert(s[0]);
    for (ll i = 1; i < n; i++)
    {
        c.insert(s[i]);
        prefix[i] = c.size();
    }
    c.clear();
    c.insert(s[n - 1]);
    for (ll i = n - 2; i >= 0; i--)
    {
        c.insert(s[i]);
        suffix[i] = c.size();
    }
    ll ans = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        ans = max(ans, prefix[i] + suffix[i + 1]);
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