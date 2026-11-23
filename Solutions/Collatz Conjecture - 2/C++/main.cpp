// Problem: Collatz Conjecture
// Link to the problem: https://codeforces.com/contest/1982/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;
    while (k > 0 && x > 1)
    {
        const ll z = y - (x % y);
        if (k < z)
        {
            x += k;
            k = 0;
        }
        else
        {
            x += z;
            k -= z;
            while (x % y == 0)
            {
                x /= y;
            }
        }
    }
    if (k > 0)
    {
        x = 1 + k % (y - 1);
    }
    cout << x << endl;
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