// Problem: Line to Cashier
// Link to the problem: https://codeforces.com/contest/408/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> k(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> k[i];
    }
    ll ans = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll x = 15 * k[i];
        for (ll j = 0; j < k[i]; j++)
        {
            ll y;
            cin >> y;
            x += 5 * y;
        }
        ans = min(ans, x);
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