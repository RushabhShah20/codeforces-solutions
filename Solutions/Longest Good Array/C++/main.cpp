// Problem: Longest Good Array
// Link to the problem: https://codeforces.com/contest/2008/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll ans = 0, i = 1, j = 100000;
    while (i <= j)
    {
        const ll m = i + (j - i) / 2;
        if (l + m * (m + 1) / 2 <= r)
        {
            ans = m;
            i = m + 1;
        }
        else
        {
            j = m - 1;
        }
    }
    ans++;
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