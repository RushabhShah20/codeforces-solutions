// Problem: How Much Does Daytona Cost?
// Link to the problem: https://codeforces.com/contest/1878/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    bool ans = false;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == k)
        {
            ans = true;
        }
    }
    if (ans == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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