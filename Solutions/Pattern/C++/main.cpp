// Problem: Pattern
// Link to the problem: https://codeforces.com/contest/412/problem/C
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
    const ll m = s[0].size();
    string ans(m, ' ');
    for (ll i = 0; i < m; i++)
    {
        unordered_set<char> t;
        for (ll j = 0; j < n; j++)
        {
            if (s[j][i] != '?')
            {
                t.insert(s[j][i]);
            }
        }
        ans[i] = t.empty() ? 'a' : (t.size() == 1 ? *t.begin() : '?');
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