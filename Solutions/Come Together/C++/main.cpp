// Problem: Come Together
// Link to the problem: https://codeforces.com/contest/1845/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    const ll x = xb > xa == xc > xa ? min(abs(xb - xa), abs(xc - xa)) : 0, y = yb > ya == yc > ya ? min(abs(yb - ya), abs(yc - ya)) : 0, ans = x + y + 1;
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