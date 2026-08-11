// Problem: Limit
// Link to the problem: https://codeforces.com/contest/197/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n + 1), b(m + 1);
    for (ll i = 0; i < n + 1; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m + 1; i++)
    {
        cin >> b[i];
    }
    if (n > m)
    {
        const ll x = a[0] * b[0];
        const string ans = x > 0 ? "Infinity" : "-Infinity";
        cout << ans << endl;
    }
    else if (n < m)
    {
        cout << 0 << "/" << 1 << endl;
    }
    else
    {
        const ll z = __gcd(abs(a[0]), abs(b[0])), x = (b[0] < 0 && a[0] > 0) || (b[0] > 0 && a[0] < 0) ? -abs(a[0]) / z : abs(a[0]) / z, y = abs(b[0]) / z;
        cout << x << "/" << y << endl;
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