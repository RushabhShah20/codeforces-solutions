// Problem: Two 0-1 Sequences
// Link to the problem: https://codeforces.com/contest/1704/problem/A
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
    if (n == m)
    {
        const string ans = s == t ? "YES" : "NO";
        cout << ans << endl;
        return;
    }
    const ll k = n - m + 1;
    const string a = s.substr(k), b = t.substr(1);
    if (a != b)
    {
        cout << "NO" << endl;
        return;
    }
    for (ll i = 0; i < k; i++)
    {
        if (s[i] == t[0])
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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