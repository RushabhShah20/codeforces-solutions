// Problem: Serval and Bus
// Link to the problem: https://codeforces.com/contest/1153/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    vector<ll> b(n, LLONG_MAX);
    ll mn = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll l = 1, r = 1000000;
        while (l <= r)
        {
            const ll m = l + (r - l) / 2;
            const ll x = a[i].first + (m - 1) * a[i].second;
            if (x >= k)
            {
                b[i] = x;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        mn = min(mn, b[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        if (b[i] == mn)
        {
            cout << i + 1 << endl;
            return;
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