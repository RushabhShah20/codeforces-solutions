// Problem: 2-3-numbers
// Link to the problem: https://codeforces.com/contest/926/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll ans = 0;
    for (ll i = 0; i <= 32; i++)
    {
        for (ll j = 0; j <= 32; j++)
        {
            const ll k = powl(2, i) * powl(3, j);
            ans += (k >= l && k <= r) ? 1 : 0;
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
    solve();
    return 0;
}