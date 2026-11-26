// Problem: Maximum of Maximums of Minimums
// Link to the problem: https://codeforces.com/contest/870/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll x = LLONG_MIN, y = LLONG_MAX;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x = max(x, a[i]);
        y = min(y, a[i]);
    }
    const ll ans = k == 1 ? y : (k == 2 ? max(a[0], a[n - 1]) : x);
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