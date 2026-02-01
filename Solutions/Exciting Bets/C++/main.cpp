// Problem: Exciting Bets
// Link to the problem: https://codeforces.com/contest/1543/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << "0 0" << endl;
    }
    else
    {
        const ll x = abs(a - b), y = min(b % x, x - b % x);
        cout << x << " " << y << endl;
    }
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