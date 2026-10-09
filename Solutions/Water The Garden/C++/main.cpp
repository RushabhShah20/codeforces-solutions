// Problem: Water The Garden
// Link to the problem: https://codeforces.com/contest/920/problem/A
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
        cin >> a[i];
    }
    ll ans = a[0];
    ans = max(ans, n - a[k - 1] + 1);
    for (ll i = 1; i < k; i++)
    {
        ans = max(ans, (a[i] - a[i - 1] + 2) >> 1);
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