// Problem: Eating Queries
// Link to the problem: https://codeforces.com/contest/1676/problem/E
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
    sort(a.begin(), a.end(), greater<>());
    for (ll i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        ll ans = -1, l = 0, r = n - 1;
        while (l <= r)
        {
            const ll k = l + ((r - l) >> 1);
            if (a[k] >= x)
            {
                ans = k;
                r = k - 1;
            }
            else
            {
                l = k + 1;
            }
        }
        ans = ans == -1 ? -1 : ans + 1;
        cout << ans << endl;
    }
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