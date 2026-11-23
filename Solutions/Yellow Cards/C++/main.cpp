// Problem: Yellow Cards
// Link to the problem: https://codeforces.com/contest/1215/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a1, a2, k1, k2, n;
    cin >> a1 >> a2 >> k1 >> k2 >> n;
    const ll p = min(a1, n / k1), q = min(a2, n / k2), x = max(0LL, n - a1 * (k1 - 1) - a2 * (k2 - 1)), y = k1 <= k2 ? p + max(0LL, n - k1 * p) / k2 : q + max(0LL, n - k2 * q) / k1;
    cout << x << " " << y << endl;
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