// Problem: Add Plus Minus Sign
// Link to the problem: https://codeforces.com/contest/1774/problem/A
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
    string ans(n - 1, ' ');
    ll x = s[0] - '0';
    for (ll i = 1; i < n; i++)
    {
        if (x == 0)
        {
            ans[i - 1] = '+';
            if (s[i] == '1')
            {
                x = 1;
            }
        }
        else
        {
            if (s[i] == '1')
            {
                ans[i - 1] = '-';
                x = 0;
            }
            else
            {
                ans[i - 1] = '+';
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}