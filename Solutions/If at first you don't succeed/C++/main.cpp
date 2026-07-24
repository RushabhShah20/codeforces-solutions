// Problem: If at first you don't succeed...
// Link to the problem: https://codeforces.com/contest/991/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, n;
    cin >> a >> b >> c >> n;
    const ll x = n - (a + b - c), ans = x <= 0 || c > a || c > b ? -1 : x;
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