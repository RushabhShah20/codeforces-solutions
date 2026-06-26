// Problem: President's Office
// Link to the problem: https://codeforces.com/contest/6/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    char c;
    cin >> c;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    unordered_set<char> t;
    const vector<pair<ll, ll>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (s[i][j] == c)
            {
                for (ll k = 0; k < 4; k++)
                {
                    const ll x = i + dirs[k].first, y = j + dirs[k].second;
                    if (x >= 0 && x < n && y >= 0 && y < m)
                    {
                        const char d = s[x][y];
                        if (d != '.' && d != c)
                        {
                            t.insert(d);
                        }
                    }
                }
            }
        }
    }
    const ll ans = t.size();
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