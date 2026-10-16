// Problem: Also Try Minecraft
// Link to the problem: https://codeforces.com/contest/1709/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n + 1), b(n + 1), c(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 2; i <= n; i++)
    {
        b[i] = b[i - 1] + max(0LL, a[i - 1] - a[i]);
    }
    for (ll i = n - 1; i >= 1; i--)
    {
        c[i] = c[i + 1] + max(0LL, a[i + 1] - a[i]);
    }
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        const ll ans = x > y ? c[y] - c[x] : b[y] - b[x];
        cout << ans << endl;
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