// Problem: Optimal Purchase
// Link to the problem: https://codeforces.com/contest/2230/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    const ll x = n * a, y = (n + 2) / 3 * b, z = n / 3 * b + n % 3 * a, ans = min({x, y, z});
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