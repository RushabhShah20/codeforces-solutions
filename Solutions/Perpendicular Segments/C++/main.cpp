// Problem: Perpendicular Segments
// Link to the problem: https://codeforces.com/contest/2026/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;
    const ll z = min(x, y);
    cout << 0 << " " << 0 << " " << z << " " << z << endl;
    cout << 0 << " " << z << " " << z << " " << 0 << endl;
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