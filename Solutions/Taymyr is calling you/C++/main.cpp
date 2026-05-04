// Problem: Taymyr is calling you
// Link to the problem: https://codeforces.com/contest/764/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, z;
    cin >> n >> m >> z;
    const ll x = __gcd(m, n), y = m * n / x, ans = z / y;
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