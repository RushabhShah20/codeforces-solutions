// Problem: Maximize?
// Link to the problem: https://codeforces.com/contest/1968/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x;
    cin >> x;
    ll y = 1;
    const ll g = __gcd(1LL, x) + 1;
    for (ll i = 1; i < x; i++)
    {
        const ll z = __gcd(i, x) + i;
        if (z > g)
        {
            y = i;
        }
    }
    cout << y << endl;
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