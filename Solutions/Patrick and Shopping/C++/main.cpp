// Problem: Patrick and Shopping
// Link to the problem: https://codeforces.com/contest/599/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    const ll x = d1 + min(d3, d1 + d2) + min(d2, d1 + d3), y = d2 + min(d3, d1 + d2) + min(d1, d2 + d3), ans = min(x, y);
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