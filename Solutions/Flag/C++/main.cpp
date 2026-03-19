// Problem: Flag
// Link to the problem: https://codeforces.com/contest/16/problem/A
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
        for (ll j = 1; j < m; j++)
        {
            if (s[i][j] != s[i][j - 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    for (ll j = 0; j < m; j++)
    {
        for (ll i = 1; i < n; i++)
        {
            if (s[i][j] == s[i - 1][j])
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