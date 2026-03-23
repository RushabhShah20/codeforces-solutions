// Problem: Morning Sandwich
// Link to the problem: https://codeforces.com/contest/1849/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll b, c, h, ans = 0;
    cin >> b >> c >> h;
    if (c >= h)
    {
        if (b >= c + 1)
        {
            ans += 2 * c + 1;
        }
        else
        {
            ans += 2 * b - 1;
        }
        b -= (c + 1);
    }
    else
    {
        if (b >= h + 1)
        {
            ans += 2 * h + 1;
        }
        else
        {
            ans += 2 * b - 1;
        }
        b -= (h + 1);
    }
    if (b > 0)
    {
        if (c >= h)
        {
            if (b >= h)
            {
                ans += 2 * h;
            }
            else
            {
                ans += 2 * b;
            }
        }
        else
        {
            if (b >= c)
            {
                ans += 2 * c;
            }
            else
            {
                ans += 2 * b;
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