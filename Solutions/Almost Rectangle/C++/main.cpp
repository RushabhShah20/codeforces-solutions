// Problem: Almost Rectangle
// Link to the problem: https://codeforces.com/contest/1512/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<pair<ll, ll>> a;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (s[i][j] == '*')
            {
                a.push_back({i, j});
            }
        }
    }
    if (a[0].first == a[1].first)
    {
        if (a[0].first == 0)
        {
            s[n - 1][a[0].second] = s[n - 1][a[1].second] = '*';
        }
        else
        {
            s[0][a[0].second] = s[0][a[1].second] = '*';
        }
    }
    else if (a[0].second == a[1].second)
    {
        if (a[0].second == 0)
        {
            s[a[0].first][n - 1] = s[a[1].first][n - 1] = '*';
        }
        else
        {
            s[a[0].first][0] = s[a[1].first][0] = '*';
        }
    }
    else
    {
        s[a[0].first][a[1].second] = s[a[1].first][a[0].second] = '*';
    }
    for (ll i = 0; i < n; i++)
    {
        cout << s[i] << endl;
    }
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