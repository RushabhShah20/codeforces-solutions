// Problem: Buying Shovels
// Link to the problem: https://codeforces.com/contest/1360/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = n;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            const ll j = n / i;
            if (i <= k)
            {
                ans = min(ans, j);
            }
            if (j <= k)
            {
                ans = min(ans, i);
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