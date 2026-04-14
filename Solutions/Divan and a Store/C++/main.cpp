// Problem: Divan and a Store
// Link to the problem: https://codeforces.com/contest/1614/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, l, r, k;
    cin >> n >> l >> r >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] >= l && a[i] <= r)
        {
            if (k >= a[i])
            {
                k -= a[i];
                ans++;
            }
            else
            {
                break;
            }
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