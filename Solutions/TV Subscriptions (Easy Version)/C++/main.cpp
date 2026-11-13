// Problem: TV Subscriptions (Easy Version)
// Link to the problem: https://codeforces.com/contest/1225/problem/B1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, m;
    cin >> n >> k >> m;
    vector<ll> a(n), b(k);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = k;
    for (ll i = 0; i < n; i++)
    {
        if (i >= m)
        {
            b[a[i] - 1]++;
            b[a[i - m] - 1]--;
        }
        else
        {
            b[a[i] - 1]++;
        }
        if (i >= m - 1)
        {
            ll x = 0;
            for (ll j = 0; j < k; j++)
            {
                x += b[j] > 0;
            }
            ans = min(ans, x);
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