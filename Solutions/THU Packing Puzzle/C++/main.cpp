// Problem: THU Packing Puzzle
// Link to the problem: https://codeforces.com/contest/2216/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    const ll x = min(a, c);
    ll ans = x << 2;
    a -= x;
    c -= x;
    ans += 3 * (a + b + c) - (a <= 2 * b ? a : a - 1);
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