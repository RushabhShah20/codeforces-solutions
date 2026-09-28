// Problem: Card Constructions
// Link to the problem: https://codeforces.com/contest/1345/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    while (n >= 2)
    {
        ll x = 0, l = 1, r = 50000;
        while (l <= r)
        {
            const ll m = l + (r - l) / 2;
            if ((3 * m * m + m) / 2 <= n)
            {
                x = m;
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        if (x == 0)
        {
            break;
        }
        n -= (3 * x * x + x) / 2;
        ans++;
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