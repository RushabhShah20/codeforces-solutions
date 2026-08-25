// Problem: Comparing Strings
// Link to the problem: https://codeforces.com/contest/186/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size(), m = t.size();
    if (n != m)
    {
        cout << "NO" << endl;
        return;
    }
    vector<ll> a(26, 0), b(26, 0);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    for (ll i = 0; i < m; i++)
    {
        b[t[i] - 'a']++;
    }
    for (ll i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        x += s[i] != t[i] ? 1 : 0;
    }
    if (x == 2)
    {
        cout << "YES" << endl;
    }
    else if (x == 0)
    {
        for (ll i = 0; i < 26; i++)
        {
            if (a[i] >= 2)
            {
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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