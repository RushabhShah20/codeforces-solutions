// Problem: New Year and the Christmas Ornament
// Link to the problem: https://codeforces.com/contest/1091/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll y, b, r;
    cin >> y >> b >> r;
    const ll x = min({y, b - 1, r - 2}), ans = 3 * (x + 1);
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