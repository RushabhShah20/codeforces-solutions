// Problem: Youmu Konpaku and the Duel
// Link to the problem: https://codeforces.com/contest/2288/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = LLONG_MAX;
    for (ll i = 1; i <= 256; i++)
    {
        ll x = i, y = n, z = i - 1;
        while (y > 0 && x > 0)
        {
            y -= x;
            z++;
            x--;
        }
        if (y <= 0)
        {
            ans = min(ans, z);
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