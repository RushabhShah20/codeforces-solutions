// Problem: Little Pigs and Wolves
// Link to the problem: https://codeforces.com/contest/116/problem/B
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
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (s[i][j] == 'W')
            {
                if (i > 0 && s[i - 1][j] == 'P')
                {
                    s[i - 1][j] = '.';
                    ans++;
                }
                else if (j > 0 && s[i][j - 1] == 'P')
                {
                    s[i][j - 1] = '.';
                    ans++;
                }
                else if (i < n - 1 && s[i + 1][j] == 'P')
                {
                    s[i + 1][j] = '.';
                    ans++;
                }
                else if (j < m - 1 && s[i][j + 1] == 'P')
                {
                    s[i][j + 1] = '.';
                    ans++;
                }
            }
        }
    }
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