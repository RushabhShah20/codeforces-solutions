// Problem: Two Rabbits
// Link to the problem: https://codeforces.com/contest/1304/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    const ll ans = (y - x) % (a + b) == 0 ? (y - x) / (a + b) : -1;
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