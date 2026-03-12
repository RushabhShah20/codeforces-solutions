// Problem: Robin Helps
// Link to the problem: https://codeforces.com/contest/2014/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, y = 0, ans = 0;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x >= k)
        {
            y += x;
        }
        else
        {
            if (x == 0)
            {
                if (y > 0)
                {
                    ans++;
                    y--;
                }
            }
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