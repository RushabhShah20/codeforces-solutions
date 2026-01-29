// Problem: Clock Conversion
// Link to the problem: https://codeforces.com/contest/1950/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll hh = stoll(s.substr(0, 2));
    string ans = s;
    if (hh > 12)
    {
        hh -= 12;
        const ll x = hh / 10, y = hh % 10;
        ans[0] = x + '0';
        ans[1] = y + '0';
        ans += " PM";
    }
    else if (hh == 0)
    {
        ans[0] = 1 + '0';
        ans[1] = 2 + '0';
        ans += " AM";
    }
    else if (hh == 12)
    {
        ans += " PM";
    }
    else
    {
        ans += " AM";
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