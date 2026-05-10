// Problem: Era
// Link to the problem: https://codeforces.com/contest/1604/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll mx = 0, m = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        mx = max(mx, x);
        if (mx <= m)
        {
            m++;
        }
        else
        {
            m = mx;
        }
    }
    const ll ans = m - n;
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