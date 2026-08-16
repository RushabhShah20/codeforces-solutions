// Problem: Cableway
// Link to the problem: https://codeforces.com/contest/90/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    const ll x = 30 + 3 * ((a + 1) / 2 - 1), y = 31 + 3 * ((b + 1) / 2 - 1), z = 32 + 3 * ((c + 1) / 2 - 1), ans = max({x, y, z});
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