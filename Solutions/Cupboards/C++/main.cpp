// Problem: Cupboards
// Link to the problem: https://codeforces.com/contest/248/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        if (l == 1)
        {
            x++;
        }
        if (r == 1)
        {
            y++;
        }
    }
    const ll ans = min(x, n - x) + min(y, n - y);
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