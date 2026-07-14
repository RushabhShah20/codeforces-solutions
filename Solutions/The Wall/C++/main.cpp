// Problem: The Wall
// Link to the problem: https://codeforces.com/contest/340/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    const ll z = x * y / __gcd(x, y), ans = b / z - (a - 1) / z;
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