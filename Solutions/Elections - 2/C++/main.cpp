// Problem: Elections
// Link to the problem: https://codeforces.com/contest/1043/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool comp(const ll n, const vector<ll> &a, const ll m)
{
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        x += a[i];
        y += m - a[i];
    }
    const bool ans = x < y;
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    ll ans = 0, l = mx, r = 10 * mx;
    while (l <= r)
    {
        const ll m = l + (r - l) / 2;
        if (comp(n, a, m))
        {
            ans = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
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
    solve();
    return 0;
}