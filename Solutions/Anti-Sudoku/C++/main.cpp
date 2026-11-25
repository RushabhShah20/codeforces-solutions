// Problem: Anti-Sudoku
// Link to the problem: https://codeforces.com/contest/1335/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<string> s(9);
    for (ll i = 0; i < 9; i++)
    {
        cin >> s[i];
        for (ll j = 0; j < 9; j++)
        {
            if (s[i][j] == '3')
            {
                s[i][j] = '5';
            }
        }
    }
    for (ll i = 0; i < 9; i++)
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}