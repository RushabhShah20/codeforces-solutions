// Problem: Two Towers
// Link to the problem: https://codeforces.com/contest/1795/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    reverse(t.begin(), t.end());
    s.append(t);
    unordered_map<ll, ll> k;
    ll x = 1;
    for (ll i = 1; i < m + n; i++)
    {
        if (s[i] == s[i - 1])
        {
            x++;
        }
        else
        {
            k[x]++;
            x = 1;
        }
    }
    k[x]++;
    ll mx = 0;
    for (const pair<ll, ll> i : k)
    {
        mx = max(mx, i.first);
    }
    const string ans = mx <= 1 || (mx == 2 && k[mx] <= 1) ? "YES" : "NO";
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