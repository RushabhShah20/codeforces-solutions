// Problem: Numbers on the Chessboard
// Link to the problem: https://codeforces.com/contest/1027/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, t;
    cin >> n >> t;
    const ll m = (n * n + 1) / 2;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        const ll z = (x - 1) * n + y, ans = x + y & 1 ? m + (z + 1) / 2 : (z + 1) / 2;
        cout << ans << endl;
    }
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