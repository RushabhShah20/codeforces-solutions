// Problem: Little Elephant and Chess
// Link to the problem: https://codeforces.com/contest/259/problem/A
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
    for (ll i = 0; i < 8; i++)
    {
        for (ll j = 0; j < 7; j++)
        {
            if (s[i][j] == s[i][j + 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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