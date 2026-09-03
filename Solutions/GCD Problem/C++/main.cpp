// Problem: GCD Problem
// Link to the problem: https://codeforces.com/contest/1617/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n & 1)
    {
        ll x = 2;
        while (__gcd(x, n - 1 - x) != 1)
        {
            x++;
        }
        cout << x << " " << n - x - 1 << " " << 1 << endl;
    }
    else
    {
        cout << n - 3 << " " << 2 << " " << 1 << endl;
    }
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