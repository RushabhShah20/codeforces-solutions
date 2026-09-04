// Problem: Disturbing Distribution
// Link to the problem: https://codeforces.com/contest/2226/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    constexpr ll m = 676767677;
    ll ans = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x != 1)
        {
            ans = ans + x % m;
        }
        y = x;
    }
    ans = y == 1 ? ans + 1 % m : ans;
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