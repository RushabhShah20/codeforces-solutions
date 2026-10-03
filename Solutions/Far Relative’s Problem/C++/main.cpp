// Problem: Far Relative’s Problem
// Link to the problem: https://codeforces.com/contest/629/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(366);
    for (ll i = 0; i < n; i++)
    {
        char c;
        ll x, y;
        cin >> c >> x >> y;
        if (c == 'F')
        {
            for (ll j = x - 1; j <= y - 1; j++)
            {
                a[j].first++;
            }
        }
        else
        {
            for (ll j = x - 1; j <= y - 1; j++)
            {
                a[j].second++;
            }
        }
    }
    ll ans = 0;
    for (ll i = 0; i < 366; i++)
    {
        ans = max(ans, 2 * min(a[i].first, a[i].second));
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