// Problem: Magic Stick
// Link to the problem: https://codeforces.com/contest/1257/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    const string ans = x > 3 ? "YES" : (x == 1 ? (y == 1 ? "YES" : "NO") : (x == 2 || x == 3 ? (y <= 3 ? "YES" : "NO") : "NO"));
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