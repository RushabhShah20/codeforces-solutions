// Problem: Asterisk-Minor Template
// Link to the problem: https://codeforces.com/contest/1796/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    const ll x = a.size(), y = b.size();
    if (a[0] == b[0])
    {
        cout << "YES" << endl;
        cout << a[0] << "*" << endl;
        return;
    }
    if (a[x - 1] == b[y - 1])
    {
        cout << "YES" << endl;
        cout << "*" << a[x - 1] << endl;
        return;
    }
    unordered_set<string> s;
    for (ll i = 0; i < y - 1; i++)
    {
        s.insert(b.substr(i, 2));
    }
    for (ll i = 0; i < x - 1; i++)
    {
        if (s.count(a.substr(i, 2)) > 0)
        {
            cout << "YES" << endl;
            cout << "*" << a[i] << a[i + 1] << "*" << endl;
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