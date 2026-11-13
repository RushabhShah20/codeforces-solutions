// Problem: Marenol (easy version)
// Link to the problem: https://codeforces.com/contest/2254/problem/C1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    string a, b, c, d;
    for (ll i = 0; i < n; i++)
    {
        if (i & 1)
        {
            a.append(1, s[i]);
            b.append(1, t[i]);
        }
        else
        {
            c.append(1, s[i]);
            d.append(1, t[i]);
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    for (ll i = 0; i < n >> 1; i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    for (ll i = 0; i < (n + 1) >> 1; i++)
    {
        if (c[i] != d[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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