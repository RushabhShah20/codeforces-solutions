// Problem: Save More Mice
// Link to the problem: https://codeforces.com/contest/1593/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(k);
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        a[i] = n - x;
    }
    sort(a.begin(), a.end());
    for (ll i = 1; i < k; i++)
    {
        a[i] += a[i - 1];
    }
    const ll ans = lower_bound(a.begin(), a.end(), n) - a.begin();
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