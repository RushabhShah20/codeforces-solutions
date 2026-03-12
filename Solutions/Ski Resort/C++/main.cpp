// Problem: Ski Resort
// Link to the problem: https://codeforces.com/contest/1840/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, x, y = 0, ans = 0;
    cin >> n >> k >> x;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z <= x)
        {
            y++;
        }
        else
        {
            if (y >= k)
            {
                ans += ((y - k + 1) * (y - k + 2) / 2);
            }
            y = 0;
        }
    }
    if (y >= k)
    {
        ans += ((y - k + 1) * (y - k + 2) / 2);
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