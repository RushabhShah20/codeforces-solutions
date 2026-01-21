// Problem: Target Practice
// Link to the problem: https://codeforces.com/contest/1873/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int getValue(const ll r, const ll c, const char x)
{
    if (x == 'X')
    {
        if (r >= 4 && r <= 5 && c >= 4 && c <= 5)
        {
            return 5;
        }
        if (r >= 3 && r <= 6 && c >= 3 && c <= 6)
        {
            return 4;
        }
        if (r >= 2 && r <= 7 && c >= 2 && c <= 7)
        {
            return 3;
        }
        if (r >= 1 && r <= 8 && c >= 1 && c <= 8)
        {
            return 2;
        }
        return 1;
    }
    return 0;
}

void solve()
{
    vector<string> s(10);
    for (ll i = 0; i < 10; i++)
    {
        cin >> s[i];
    }
    ll ans = 0;
    for (ll i = 0; i < 10; i++)
    {
        for (ll j = 0; j < 10; j++)
        {
            ans += getValue(i, j, s[i][j]);
        }
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}