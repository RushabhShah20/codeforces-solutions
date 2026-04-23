// Problem: Counting Rhombi
// Link to the problem: https://codeforces.com/contest/189/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll w, h;
    cin >> w >> h;
    ll ans = 0;
    for (ll i = 2; i <= w; i += 2)
    {
        for (ll j = 2; j <= h; j += 2)
        {
            ans += (w - i + 1) * (h - j + 1);
        }
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