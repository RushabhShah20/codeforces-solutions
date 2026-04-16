// Problem: Golden Plate
// Link to the problem: https://codeforces.com/contest/1031/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll w, h, k;
    cin >> w >> h >> k;
    ll x = w - 1, y = h - 1, ans = 0;
    for (ll i = 0; i < k; i++)
    {
        ans += 2 * (x + y);
        x -= 4;
        y -= 4;
    }
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