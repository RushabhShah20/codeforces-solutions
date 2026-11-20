// Problem: XOR and Triangle
// Link to the problem: https://codeforces.com/contest/2074/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x;
    cin >> x;
    ll ans = -1;
    for (ll i = 0; i < 32; i++)
    {
        for (ll j = 0; j < 32; j++)
        {
            const ll y = (1LL << i) | (1LL << j);
            if (y < x && x + y > (x ^ y) && y + (x ^ y) > x)
            {
                ans = y;
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