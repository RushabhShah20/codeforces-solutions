// Problem: Integer Moves
// Link to the problem: https://codeforces.com/contest/1657/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        const ll z = x * x + y * y;
        ll l = 1, r = z;
        while (l <= r)
        {
            const ll m = l + (r - l) / 2;
            if (m * m == z)
            {
                cout << 1 << endl;
                return;
            }
            if (m * m > z)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        cout << 2 << endl;
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