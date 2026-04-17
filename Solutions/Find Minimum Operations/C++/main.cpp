// Problem: Find Minimum Operations
// Link to the problem: https://codeforces.com/contest/2020/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << n << endl;
        return;
    }
    ll ans = 0;
    while (n > 0)
    {
        ans += n % k;
        n /= k;
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