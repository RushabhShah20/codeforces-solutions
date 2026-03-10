// Problem: Fox And Snake
// Link to the problem: https://codeforces.com/contest/510/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> ans(n, string(m, '.'));
    for (ll i = 0; i < n; i++)
    {
        if (i % 4 == 1)
        {
            ans[i][m - 1] = '#';
        }
        else if (i % 4 == 3)
        {
            ans[i][0] = '#';
        }
        else
        {
            ans[i] = string(m, '#');
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