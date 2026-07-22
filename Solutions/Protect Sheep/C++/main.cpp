// Problem: Protect Sheep
// Link to the problem: https://codeforces.com/contest/948/problem/A
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
        for (ll j = 0; j < m; j++)
        {
            if (s[i][j] == 'W')
            {
                if (i > 0)
                {
                    if (s[i - 1][j] == 'S')
                    {
                        cout << "No" << endl;
                        return;
                    }
                }
                if (i < n - 1)
                {
                    if (s[i + 1][j] == 'S')
                    {
                        cout << "No" << endl;
                        return;
                    }
                }
                if (j > 0)
                {
                    if (s[i][j - 1] == 'S')
                    {
                        cout << "No" << endl;
                        return;
                    }
                }
                if (j < m - 1)
                {
                    if (s[i][j + 1] == 'S')
                    {
                        cout << "No" << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "Yes" << endl;
    vector<string> ans(n, string(m, '.'));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ans[i][j] = s[i][j] == '.' ? 'D' : s[i][j];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
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