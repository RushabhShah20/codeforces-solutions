// Problem: Mark the Dust Sweeper
// Link to the problem: https://codeforces.com/contest/1705/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0, x;
    bool y = false;
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> x;
        if (x > 0)
        {
            y = true;
        }
        if (y)
        {
            ans += max(1LL, x);
        }
    }
    cin >> x;
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