// Problem: Fox and Cross
// Link to the problem: https://codeforces.com/contest/389/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(n), t(n, string(n, '.'));
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (ll i = 1; i < n - 1; i++)
    {
        for (ll j = 1; j < n - 1; j++)
        {
            if (s[i][j] == '#' && s[i - 1][j] == '#' && s[i + 1][j] == '#' && s[i][j - 1] == '#' && s[i][j + 1] == '#' && t[i][j] == '.' && t[i - 1][j] == '.' && t[i + 1][j] == '.' && t[i][j - 1] == '.' && t[i][j + 1] == '.')
            {
                t[i][j] = t[i - 1][j] = t[i + 1][j] = t[i][j - 1] = t[i][j + 1] = '#';
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            cout << "NO" << endl;
            return;
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