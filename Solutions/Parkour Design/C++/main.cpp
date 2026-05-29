// Problem: Parkour Design
// Link to the problem: https://codeforces.com/contest/2202/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    const ll z = y > 0 ? 2 * y : (y < 0 ? 4 * -y : 3 * y);
    const string ans = x >= z && (x - z) % 3 == 0 ? "YES" : "NO";
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