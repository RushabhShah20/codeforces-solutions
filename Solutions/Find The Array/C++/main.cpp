// Problem: Find The Array
// Link to the problem: https://codeforces.com/contest/1550/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 1, l = 1, r = n;
    while (l <= r)
    {
        const ll m = l + (r - l) / 2;
        if (m * m >= n)
        {
            ans = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
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