// Problem: Yet Another Promotion
// Link to the problem: https://codeforces.com/contest/1793/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, n, m;
    cin >> a >> b >> n >> m;
    const ll c = n / (m + 1), x = n * min(a, b), y = c * m * a + max(0LL, n - c * (m + 1)) * min(a, b), ans = min(x, y);
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