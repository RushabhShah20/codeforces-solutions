// Problem: Numbers Box
// Link to the problem: https://codeforces.com/contest/1447/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 0, x = 101, y = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll z;
            cin >> z;
            const ll w = abs(z);
            ans += w;
            x = min(x, w);
            if (z < 0)
            {
                y++;
            }
        }
    }
    if (y & 1)
    {
        ans -= 2 * x;
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