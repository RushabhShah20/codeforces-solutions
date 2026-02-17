// Problem: Word on the Paper
// Link to the problem: https://codeforces.com/contest/1850/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<string> s(8);
    for (ll i = 0; i < 8; i++)
    {
        cin >> s[i];
    }
    string ans;
    for (ll j = 0; j < 8; j++)
    {
        for (ll i = 0; i < 8; i++)
        {
            if (s[i][j] != '.')
            {
                ans += s[i][j];
            }
        }
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