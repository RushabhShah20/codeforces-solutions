// Problem: PawnChess
// Link to the problem: https://codeforces.com/contest/592/problem/A
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
    ll x = 8, y = 1;
    for (ll i = 0; i < 8; i++)
    {
        for (ll j = 0; j < 8; j++)
        {
            if (s[i][j] == 'B')
            {
                bool z = true;
                for (ll k = i + 1; k < 8; k++)
                {
                    if (s[k][j] != '.')
                    {
                        z = false;
                    }
                }
                if (z)
                {
                    y = max(y, i + 1);
                }
            }
            if (s[i][j] == 'W')
            {
                bool z = true;
                for (ll k = 0; k < i; k++)
                {
                    if (s[k][j] != '.')
                    {
                        z = false;
                    }
                }
                if (z)
                {
                    x = min(x, i + 1);
                }
            }
        }
    }
    const string ans = abs(x - 1) <= abs(y - 8) ? "A" : "B";
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