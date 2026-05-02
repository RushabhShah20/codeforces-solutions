// Problem: Suits
// Link to the problem: https://codeforces.com/contest/1271/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    ll ans = 0;
    for (ll i = 0; i <= d; i++)
    {
        const ll x = e * min({a, d - i}), y = f * min({b, c, i});
        ans = max(ans, x + y);
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