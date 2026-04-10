// Problem: Parallelepiped
// Link to the problem: https://codeforces.com/contest/224/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll lb, bh, lh;
    cin >> lb >> bh >> lh;
    const ll l = sqrtl(lb * lh / bh), b = sqrtl(bh * lb / lh), h = sqrtl(lh * bh / lb), ans = 4 * (l + b + h);
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