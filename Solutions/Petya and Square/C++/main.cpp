// Problem: Petya and Square
// Link to the problem: https://codeforces.com/contest/112/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    const ll m = n / 2;
    const string ans = (x == m || x == m + 1) && (y == m || y == m + 1) ? "NO" : "YES";
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