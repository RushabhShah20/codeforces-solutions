// Problem: MEXanized Array
// Link to the problem: https://codeforces.com/contest/1870/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    if (k > n || k > x + 1)
    {
        cout << -1 << endl;
        return;
    }
    const ll ans = k * (k - 1) / 2 + (x == k ? x - 1 : x) * (n - k);
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