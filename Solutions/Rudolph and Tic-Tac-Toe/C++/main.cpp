// Problem: Rudolph and Tic-Tac-Toe
// Link to the problem: https://codeforces.com/contest/1846/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool win(const vector<string> &s,const char c)
{
    if (s[0][0] == c && s[0][1] == c && s[0][2] == c)
    {
        return true;
    }
    if (s[1][0] == c && s[1][1] == c && s[1][2] == c)
    {
        return true;
    }
    if (s[2][0] == c && s[2][1] == c && s[2][2] == c)
    {
        return true;
    }
    if (s[0][0] == c && s[1][0] == c && s[2][0] == c)
    {
        return true;
    }
    if (s[0][1] == c && s[1][1] == c && s[2][1] == c)
    {
        return true;
    }
    if (s[0][2] == c && s[1][2] == c && s[2][2] == c)
    {
        return true;
    }
    if (s[0][0] == c && s[1][1] == c && s[2][2] == c)
    {
        return true;
    }
    if (s[0][2] == c && s[1][1] == c && s[2][0] == c)
    {
        return true;
    }
    return false;
}

void solve()
{
    vector<string> s(3);
    for (ll i = 0; i < 3; i++)
    {
        cin >> s[i];
    }
    if (win(s, 'X'))
    {
        cout << "X" << endl;
        return;
    }
    if (win(s, 'O'))
    {
        cout << "O" << endl;
        return;
    }
    if (win(s, '+'))
    {
        cout << "+" << endl;
        return;
    }
    cout << "DRAW" << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}