// Problem: Sereja and Coat Rack
// Link to the problem: https://codeforces.com/contest/368/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll m;
    cin >> m;
    sort(a.begin(), a.end());
    ll y = 0;
    for (ll i = 0; i < min(m, n); i++)
    {
        y += a[i];
    }
    const ll ans = y - max(0LL, m - n) * k;
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