// Problem: Tricky Alchemy
// Link to the problem: https://codeforces.com/contest/912/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll x, y, z;
    cin >> x >> y >> z;
    const ll ans = max(0LL, 2 * x + y - a) + max(0LL, y + 3 * z - b);
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