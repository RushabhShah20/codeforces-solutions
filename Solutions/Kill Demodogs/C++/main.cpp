// Problem: Kill Demodogs
// Link to the problem: https://codeforces.com/contest/1731/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    constexpr ll m = 1000000007;
    const ll ans = n * (n + 1) % m * (4 * n - 1) % m * 166666668 % m * 2022 % m;
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