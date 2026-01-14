// Problem: Minimum LCM
// Link to the problem: https://codeforces.com/contest/1765/problem/M
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 1, y = n - 1;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            x = n / i;
            y = n - x;
            break;
        }
    }
    cout << x << " " << y << endl;
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