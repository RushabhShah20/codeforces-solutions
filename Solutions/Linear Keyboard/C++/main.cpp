// Problem: Linear Keyboard
// Link to the problem: https://codeforces.com/contest/1607/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, s;
    cin >> a >> s;
    unordered_map<char, ll> m;
    for (ll i = 0; i < 26; i++)
    {
        m[a[i]] = i;
    }
    const ll n = s.size();
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        ans += abs(m[s[i]] - m[s[i - 1]]);
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