// Problem: Young Photographer
// Link to the problem: https://codeforces.com/contest/14/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, z;
    cin >> n >> z;
    ll x = LLONG_MIN, y = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        x = max(x, min(a, b));
        y = min(y, max(a, b));
    }
    if (x <= y)
    {
        ll ans = LLONG_MAX;
        for (ll i = x; i <= y; i++)
        {
            ans = min(ans, abs(z - i));
        }
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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