// Problem: Make a triangle!
// Link to the problem: https://codeforces.com/contest/1064/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    const ll x = max({a, b, c}), y = min({a, b, c}), z = a + b + c - x - y, ans = max(0LL, x - (y + z - 1));
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