// Problem: Ilya and tic-tac-toe game
// Link to the problem: https://codeforces.com/contest/754/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool check(const vector<string> &s)
{
    for (ll i = 0; i < 4; i++)
    {
        for (ll j = 1; j < 3; j++)
        {
            if (s[i][j - 1] == 'x' && s[i][j] == 'x' && s[i][j + 1] == 'x')
            {
                return true;
            }
        }
    }
    for (ll i = 1; i < 3; i++)
    {
        for (ll j = 0; j < 4; j++)
        {
            if (s[i - 1][j] == 'x' && s[i][j] == 'x' && s[i + 1][j] == 'x')
            {
                return true;
            }
        }
    }
    for (ll i = 1; i < 3; i++)
    {
        for (ll j = 1; j < 3; j++)
        {
            if (s[i - 1][j - 1] == 'x' && s[i][j] == 'x' && s[i + 1][j + 1] == 'x')
            {
                return true;
            }
        }
    }
    for (ll i = 1; i < 3; i++)
    {
        for (ll j = 1; j < 3; j++)
        {
            if (s[i + 1][j - 1] == 'x' && s[i][j] == 'x' && s[i - 1][j + 1] == 'x')
            {
                return true;
            }
        }
    }
    return false;
}

void solve()
{
    vector<string> s(4);
    for (ll i = 0; i < 4; i++)
    {
        cin >> s[i];
    }
    for (ll i = 0; i < 4; i++)
    {
        for (ll j = 0; j < 4; j++)
        {
            if (s[i][j] == '.')
            {
                s[i][j] = 'x';
                if (check(s))
                {
                    cout << "YES" << endl;
                    return;
                }
                s[i][j] = '.';
            }
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
    solve();
    return 0;
}