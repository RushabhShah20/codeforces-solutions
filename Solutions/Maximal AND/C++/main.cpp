// Problem: Maximal AND
// Link to the problem: https://codeforces.com/contest/1669/problem/H
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(31);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        for (ll j = 30; j >= 0; j--)
        {
            if (x & (1LL << j))
            {
                a[j]++;
            }
        }
    }
    ll ans = 0;
    for (ll i = 30; i >= 0; i--)
    {
        const ll x = n - a[i];
        if (x <= k)
        {
            k -= x;
            ans += 1LL << i;
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