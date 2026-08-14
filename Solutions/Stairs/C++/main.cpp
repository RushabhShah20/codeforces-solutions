// Problem: Stairs
// Link to the problem: https://codeforces.com/contest/1419/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 1; i < 31; i++)
    {
        const ll x = (1LL << i) - 1, y = x * (x + 1) / 2;
        if (y <= n)
        {
            ans++;
            n -= y;
        }
        else
        {
            break;
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