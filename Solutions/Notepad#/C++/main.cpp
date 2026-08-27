// Problem: Notepad#
// Link to the problem: https://codeforces.com/contest/1766/problem/B
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
    unordered_map<string, ll> m;
    for (ll i = 0; i < n; i++)
    {
        const string t = s.substr(i, 2);
        if (m.find(t) != m.end())
        {
            if (m[t] < i - 1)
            {
                cout << "YES" << endl;
                return;
            }
        }
        else
        {
            m[t] = i;
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