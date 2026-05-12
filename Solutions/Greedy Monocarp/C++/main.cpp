// Problem: Greedy Monocarp
// Link to the problem: https://codeforces.com/contest/2042/problem/A
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
    sort(a.begin(), a.end(), greater<>());
    vector<ll> p(n);
    p[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        p[i] = p[i - 1] + a[i];
    }
    ll x = 0, l = 0, r = n - 1;
    while (l <= r)
    {
        const ll m = l + (r - l) / 2;
        if (p[m] <= k)
        {
            x = p[m];
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    const ll ans = k - x;
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