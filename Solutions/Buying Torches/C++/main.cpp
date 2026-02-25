// Problem: Buying Torches
// Link to the problem: https://codeforces.com/contest/1418/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;
    const ll ans = k + ((k - 1 + k * y) % (x - 1) == 0 ? (k - 1 + k * y) / (x - 1) : (k - 1 + k * y) / (x - 1) + 1);
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