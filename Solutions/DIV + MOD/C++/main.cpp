// Problem: DIV + MOD
// Link to the problem: https://codeforces.com/contest/1650/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r, a;
    cin >> l >> r >> a;
    const ll x = r / a, y = r - a * x, ans = a * (x - 1) + a - 1 >= l ? max(x + y, (x + a - 2)) : x + y;
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