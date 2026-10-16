// Problem: Chips on the Board
// Link to the problem: https://codeforces.com/contest/1879/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0, y = 0, mnx = LLONG_MAX, mny = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        x += z;
        mnx = min(mnx, z);
    }
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        y += z;
        mny = min(mny, z);
    }
    const ll ans = min(n * mnx + y, n * mny + x);
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