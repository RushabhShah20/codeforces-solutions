// Problem: Maximum Control (easy)
// Link to the problem: https://codeforces.com/contest/958/problem/B1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        a[u - 1]++;
        a[v - 1]++;
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += a[i] == 1;
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
    solve();
    return 0;
}