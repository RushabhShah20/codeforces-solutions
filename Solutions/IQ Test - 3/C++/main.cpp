// Problem: IQ Test
// Link to the problem: https://codeforces.com/contest/287/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<string> s(4);
    for (ll i = 0; i < 4; i++)
    {
        cin >> s[i];
    }
    for (ll i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            const ll x = (s[i][j] == '#') + (s[i + 1][j] == '#') + (s[i][j + 1] == '#') + (s[i + 1][j + 1] == '#');
            if (x != 2)
            {
                cout << "YES" << endl;
                return;
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