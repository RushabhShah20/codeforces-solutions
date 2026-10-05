// Problem: DZY Loves Chessboard
// Link to the problem: https://codeforces.com/contest/445/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (s[i][j] == '.')
            {
                if (i + j & 1)
                {
                    s[i][j] = 'W';
                }
                else
                {
                    s[i][j] = 'B';
                }
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << s[i] << endl;
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