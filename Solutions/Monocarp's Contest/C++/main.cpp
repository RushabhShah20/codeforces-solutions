// Problem: Monocarp's Contest
// Link to the problem: https://codeforces.com/contest/2260/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i] == 0 ? 1 : 0;
    }
    const ll ans = x < 2 ? -1 : ((a[0] == 0 ? 0 : 1) + (a[n - 1] == 0 ? 0 : 1));
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