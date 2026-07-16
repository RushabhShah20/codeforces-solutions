// Problem: Caisa and Sugar
// Link to the problem: https://codeforces.com/contest/463/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = -1;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (100 * k >= 100 * x + y)
        {
            ans = max(ans, y == 0 ? 0 : 100 - y);
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