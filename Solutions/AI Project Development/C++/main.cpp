// Problem: AI Project Development
// Link to the problem: https://codeforces.com/contest/2233/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y, z;
    cin >> n >> x >> y >> z;
    const ll a = x + y, b = x + 10 * y, ans = min((n + a - 1) / a, z + max(0LL, (n - z * x + b - 1) / b));
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