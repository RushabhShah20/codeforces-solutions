// Problem: Update Files
// Link to the problem: https://codeforces.com/contest/1606/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll x = 1, ans = 0;
    while (x < n && x <= k)
    {
        x <<= 1;
        ans++;
    }
    if (x < n)
    {
        ans += (n - x + k - 1) / k;
    }
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