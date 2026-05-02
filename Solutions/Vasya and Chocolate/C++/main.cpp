// Problem: Vasya and Chocolate
// Link to the problem: https://codeforces.com/contest/1065/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll s, a, b, c;
    cin >> s >> a >> b >> c;
    const ll x = s / c, ans = x + b * (x / a);
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