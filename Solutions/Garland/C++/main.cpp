// Problem: Garland
// Link to the problem: https://codeforces.com/contest/1809/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    map<char, ll> m;
    for (ll i = 0; i < 4; i++)
    {
        m[s[i]]++;
    }
    if (m.size() == 1)
    {
        cout << -1 << endl;
    }
    else if (m.size() == 2)
    {
        if (m.begin()->second == m.rbegin()->second)
        {
            cout << 4 << endl;
        }
        else
        {
            cout << 6 << endl;
        }
    }
    else
    {
        cout << 4 << endl;
    }
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