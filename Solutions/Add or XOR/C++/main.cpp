// Problem: Add or XOR
// Link to the problem: https://codeforces.com/contest/2119/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a > b)
    {
        const ll ans = (a ^ 1) == b ? y : -1;
        cout << ans << endl;
    }
    else if (a < b)
    {
        ll ans = 0;
        while (a != b)
        {
            if (a + 1 == (a ^ 1))
            {
                ans += min(x, y);
            }
            else
            {
                ans += x;
            }
            a++;
        }
        cout << ans << endl;
    }
    else
    {
        cout << 0 << endl;
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