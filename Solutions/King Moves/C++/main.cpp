// Problem: King Moves
// Link to the problem: https://codeforces.com/contest/710/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s[0] == 'a' || s[0] == 'h')
    {
        if (s[1] == '1' || s[1] == '8')
        {
            cout << 3 << endl;
        }
        else
        {
            cout << 5 << endl;
        }
    }
    else
    {
        if (s[1] == '1' || s[1] == '8')
        {
            cout << 5 << endl;
        }
        else
        {
            cout << 8 << endl;
        }
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