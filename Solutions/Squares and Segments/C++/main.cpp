// Problem: Squares and Segments
// Link to the problem: https://codeforces.com/contest/1099/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const ll m = sqrtl(n);
    const ll ans = m * m >= n ? 2 * m : (m * (m + 1) >= n ? 2 * m + 1 : 2 * m + 2);
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