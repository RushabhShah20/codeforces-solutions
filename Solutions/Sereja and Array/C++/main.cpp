// Problem: Sereja and Array
// Link to the problem: https://codeforces.com/contest/315/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll x = 0;
    while (m--)
    {
        ll t;
        cin >> t;
        if (t == 1)
        {
            ll j, y;
            cin >> j >> y;
            a[j - 1] = y - x;
        }
        else if (t == 2)
        {
            ll y;
            cin >> y;
            x += y;
        }
        else
        {
            ll k;
            cin >> k;
            const ll ans = a[k - 1] + x;
            cout << ans << endl;
        }
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