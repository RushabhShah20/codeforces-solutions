// Problem: Cardboard for Pictures
// Link to the problem: https://codeforces.com/contest/1850/problem/E
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0, l = 1, r = 1000000000;
    while (l <= r)
    {
        const ll m = l + (r - l) / 2;
        ll y = 0;
        for (ll i = 0; i < n; i++)
        {
            const ll z = a[i] + 2 * m;
            y += z * z;
            if (y > k)
            {
                break;
            }
        }
        if (y <= k)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
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