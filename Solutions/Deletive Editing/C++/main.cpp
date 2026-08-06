// Problem: Deletive Editing
// Link to the problem: https://codeforces.com/contest/1666/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size(), m = t.size();
    vector<ll> a(26, 0);
    for (ll i = 0; i < m; i++)
    {
        a[t[i] - 'A']++;
    }
    string u;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[s[i] - 'A'] > 0)
        {
            u.append(1, s[i]);
            a[s[i] - 'A']--;
        }
    }
    reverse(u.begin(), u.end());
    const string ans = u == t ? "YES" : "NO";
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