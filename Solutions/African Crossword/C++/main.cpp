// Problem: African Crossword
// Link to the problem: https://codeforces.com/contest/90/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<pair<char, bool>>> a(n, vector<pair<char, bool>>(m));
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (ll j = 0; j < m; j++)
        {
            a[i][j] = {s[j], true};
        }
    }
    for (ll i = 0; i < n; i++)
    {
        unordered_map<char, ll> t;
        for (ll j = 0; j < m; j++)
        {
            t[a[i][j].first]++;
        }
        for (ll j = 0; j < m; j++)
        {
            if (t[a[i][j].first] > 1)
            {
                a[i][j].second = false;
            }
        }
    }
    for (ll j = 0; j < m; j++)
    {
        unordered_map<char, ll> t;
        for (ll i = 0; i < n; i++)
        {
            t[a[i][j].first]++;
        }
        for (ll i = 0; i < n; i++)
        {
            if (t[a[i][j].first] > 1)
            {
                a[i][j].second = false;
            }
        }
    }
    string ans;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (a[i][j].second)
            {
                ans.append(1, a[i][j].first);
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