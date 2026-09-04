// Problem: Minimums and Maximums
// Link to the problem: https://codeforces.com/contest/1680/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (l1 >= l2 && l1 <= r2)
    {
        cout << l1 << endl;
        return;
    }
    if (l2 >= l1 && l2 <= r1)
    {
        cout << l2 << endl;
        return;
    }
    const ll ans = l1 + l2;
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