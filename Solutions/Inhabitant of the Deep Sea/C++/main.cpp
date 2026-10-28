// Problem: Inhabitant of the Deep Sea
// Link to the problem: https://codeforces.com/contest/1955/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll m = 0;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m += a[i];
    }
    if (m <= k)
    {
        cout << n << endl;
        return;
    }
    ll x = (k + 1) >> 1, y = k >> 1, l = 0, r = n - 1;
    while (l <= r && x >= a[l])
    {
        x -= a[l];
        l++;
    }
    while (l <= r && y >= a[r])
    {
        y -= a[r];
        r--;
    }
    const ll ans = l + (n - 1 - r);
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