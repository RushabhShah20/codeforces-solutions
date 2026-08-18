// Problem: Game of Life
// Link to the problem: https://codeforces.com/contest/1523/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    m = min(m, n);
    for (ll i = 0; i < m; i++)
    {
        string t = s;
        if (s[0] == '0' && s[1] == '1')
        {
            t[0] = '1';
        }
        for (ll j = 1; j < n - 1; j++)
        {
            if (s[j] == '0' && ((s[j - 1] == '1' && s[j + 1] == '0') || (s[j - 1] == '0' && s[j + 1] == '1')))
            {
                t[j] = '1';
            }
        }
        if (s[n - 1] == '0' && s[n - 2] == '1')
        {
            t[n - 1] = '1';
        }
        s = t;
    }
    cout << s << endl;
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