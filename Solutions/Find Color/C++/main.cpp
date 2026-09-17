// Problem: Find Color
// Link to the problem: https://codeforces.com/contest/40/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    const ll z = sqrtl(x * x + y * y);
    const string ans = (z * z == x * x + y * y) || (z & 1 && x * y < 0) || (!(z & 1) && x * y > 0) ? "black" : "white";
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