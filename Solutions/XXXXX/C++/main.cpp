// Problem: XXXXX
// Link to the problem: https://codeforces.com/contest/1364/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll x = 0, l = -1, r = 1;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
        if (a[i] % k != 0)
        {
            if (l == -1)
            {
                l = i;
            }
            r = i;
        }
    }
    const ll ans = x % k == 0 ? (l == -1 ? -1 : max(n - 1 - l, r)) : n;
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