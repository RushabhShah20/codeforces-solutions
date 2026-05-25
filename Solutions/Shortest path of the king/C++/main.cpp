// Problem: Shortest path of the king
// Link to the problem: https://codeforces.com/contest/3/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll x = abs(s[0] - t[0]), y = abs(s[1] - t[1]), n = max(x, y);
    vector<string> ans(n);
    for (ll i = 0; i < x; i++)
    {
        if (s[0] > t[0])
        {
            ans[i].append(1, 'L');
        }
        if (s[0] < t[0])
        {
            ans[i].append(1, 'R');
        }
    }
    for (ll i = 0; i < y; i++)
    {
        if (s[1] > t[1])
        {
            ans[i].append(1, 'D');
        }
        if (s[1] < t[1])
        {
            ans[i].append(1, 'U');
        }
    }
    cout << n << endl;
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