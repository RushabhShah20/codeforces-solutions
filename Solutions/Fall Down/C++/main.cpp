// Problem: Fall Down
// Link to the problem: https://codeforces.com/contest/1669/problem/G
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
    for (ll j = 0; j < m; j++)
    {
        ll k = n - 1;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (s[i][j] == 'o')
            {
                k = i - 1;
            }
            else if (s[i][j] == '*')
            {
                s[i][j] = '.';
                s[k][j] = '*';
                k--;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}