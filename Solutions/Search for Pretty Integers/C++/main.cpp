// Problem: Search for Pretty Integers
// Link to the problem: https://codeforces.com/contest/870/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> f(10), a(n), b(m);
    ll x = 10, y = 10;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        f[a[i]]++;
        x = min(x, a[i]);
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
        f[b[i]]++;
        y = min(y, b[i]);
    }
    for (ll i = 1; i < 10; i++)
    {
        if (f[i] == 2)
        {
            cout << i << endl;
            return;
        }
    }
    const ll ans = 10 * min(x, y) + max(x, y);
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