// Problem: Puzzle From the Future
// Link to the problem: https://codeforces.com/contest/1474/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string ans(n, '1');
    ll x = 1 + s[0] - '0';
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (x == 1)
            {
                ans[i] = '0';
            }
        }
        else
        {
            if (x == 2)
            {
                ans[i] = '0';
            }
        }
        x = ans[i] - '0' + s[i] - '0';
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}