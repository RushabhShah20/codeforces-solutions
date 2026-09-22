// Problem: Maximum Sum of Digits
// Link to the problem: https://codeforces.com/contest/1060/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0;
    while (10 * x + 9 <= n)
    {
        x = 10 * x + 9;
    }
    ll ans = 0, y = n - x;
    while (x > 0)
    {
        ans += x % 10;
        x /= 10;
    }
    while (y > 0)
    {
        ans += y % 10;
        y /= 10;
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}