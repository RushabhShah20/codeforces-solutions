// Problem: GCD Arrays
// Link to the problem: https://codeforces.com/contest/1629/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r, k;
    cin >> l >> r >> k;
    if (l == r)
    {
        if (l == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        return;
    }
    const ll x = (r - l + 1) / 2 + (r & 1 && l & 1 ? 1 : 0);
    const string ans = x <= k ? "YES" : "NO";
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