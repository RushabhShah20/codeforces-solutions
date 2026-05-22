// Problem: Left-handers, Right-handers and Ambidexters
// Link to the problem: https://codeforces.com/contest/950/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r, a;
    cin >> l >> r >> a;
    ll b = min(l, r), c = max(l, r);
    const ll d = min(a, c - b);
    a -= d;
    b += d;
    b += max(0LL, a / 2);
    c += max(0LL, a / 2);
    const ll ans = 2 * min(b, c);
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