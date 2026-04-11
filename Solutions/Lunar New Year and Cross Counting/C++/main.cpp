// Problem: Lunar New Year and Cross Counting
// Link to the problem: https://codeforces.com/contest/1106/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isCross(const vector<string> &s, const ll i, const ll j)
{
    return s[i - 1][j - 1] == 'X' && s[i - 1][j + 1] == 'X' && s[i][j] == 'X' && s[i + 1][j - 1] == 'X' && s[i + 1][j + 1] == 'X';
}

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    ll ans = 0;
    for (ll i = 1; i < n - 1; i++)
    {
        for (ll j = 1; j < n - 1; j++)
        {
            if (isCross(s, i, j))
            {
                ans++;
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