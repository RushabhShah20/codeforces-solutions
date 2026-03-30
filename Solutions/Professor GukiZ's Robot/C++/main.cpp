// Problem: Professor GukiZ's Robot
// Link to the problem: https://codeforces.com/contest/620/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    const ll ans = max(abs(x1 - x2), abs(y1 - y2));
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