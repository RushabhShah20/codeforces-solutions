// Problem: Card Game
// Link to the problem: https://codeforces.com/contest/1999/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    ll x = 0, y = 0, ans = 0;
    if (a1 > b1)
    {
        x++;
    }
    else if (a1 < b1)
    {
        y++;
    }
    if (a2 > b2)
    {
        x++;
    }
    else if (a2 < b2)
    {
        y++;
    }
    if (x > y)
    {
        ans++;
    }
    x = 0, y = 0;
    if (a1 > b2)
    {
        x++;
    }
    else if (a1 < b2)
    {
        y++;
    }
    if (a2 > b1)
    {
        x++;
    }
    else if (a2 < b1)
    {
        y++;
    }
    if (x > y)
    {
        ans++;
    }
    x = 0, y = 0;
    if (a2 > b1)
    {
        x++;
    }
    else if (a2 < b1)
    {
        y++;
    }
    if (a1 > b2)
    {
        x++;
    }
    else if (a1 < b2)
    {
        y++;
    }
    if (x > y)
    {
        ans++;
    }
    x = 0, y = 0;
    if (a2 > b2)
    {
        x++;
    }
    else if (a2 < b2)
    {
        y++;
    }
    if (a1 > b1)
    {
        x++;
    }
    else if (a1 < b1)
    {
        y++;
    }
    if (x > y)
    {
        ans++;
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