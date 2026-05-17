// Problem: Red and Blue Beans
// Link to the problem: https://codeforces.com/contest/1519/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll r, b, d;
    cin >> r >> b >> d;
    const ll x = min(r, b), y = max(r, b);
    const string ans = x * (d + 1) >= y ? "YES" : "NO";
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