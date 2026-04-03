// Problem: Symmetric Encoding
// Link to the problem: https://codeforces.com/contest/1974/problem/B
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
    vector<bool> a(26, false);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a'] = true;
    }
    vector<char> t;
    for (ll i = 0; i < 26; i++)
    {
        if (a[i])
        {
            t.push_back('a' + i);
        }
    }
    const ll p = t.size();
    unordered_map<char, char> m;
    for (ll i = 0; i < p; i++)
    {
        m[t[i]] = t[p - i - 1];
    }
    string ans(n, ' ');
    for (ll i = 0; i < n; i++)
    {
        ans[i] = m[s[i]];
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