// Problem: A and B and Chess
// Link to the problem: https://codeforces.com/contest/519/problem/A
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
    ll x = 0, y = 0;
    for (ll i = 0; i < 8; i++)
    {
        for (ll j = 0; j < 8; j++)
        {
            if (s[i][j] == 'Q')
            {
                x += 9;
            }
            if (s[i][j] == 'q')
            {
                y += 9;
            }
            if (s[i][j] == 'R')
            {
                x += 5;
            }
            if (s[i][j] == 'r')
            {
                y += 5;
            }
            if (s[i][j] == 'B' || s[i][j] == 'N')
            {
                x += 3;
            }
            if (s[i][j] == 'b' || s[i][j] == 'n')
            {
                y += 3;
            }
            if (s[i][j] == 'P')
            {
                x++;
            }
            if (s[i][j] == 'p')
            {
                y++;
            }
        }
    }
    const string ans = x > y ? "White" : (x < y ? "Black" : "Draw");
    cout << ans << endl;
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