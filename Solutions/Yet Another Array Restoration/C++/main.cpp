// Problem: Yet Another Array Restoration
// Link to the problem: https://codeforces.com/contest/1409/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll b = 1;
    while ((y - x) % b != 0 || (y - x) / b > n - 1)
    {
        b++;
    }
    const ll a = y - min(n - 1, (y - 1) / b) * b;
    for (ll i = 0; i < n; i++)
    {
        const ll ans = a + i * b;
        cout << ans << " ";
    }
    cout << endl;
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