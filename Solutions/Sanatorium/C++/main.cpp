// Problem: Sanatorium
// Link to the problem: https://codeforces.com/contest/732/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    const ll x = max({a, b, c}), y = max(0LL, x - 1), ans = max(0LL, y - a) + max(0LL, y - b) + max(0LL, y - c);
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