// Problem: Shape Perimeter
// Link to the problem: https://codeforces.com/contest/2056/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 4 * n * m;
    vector<ll> x(n), y(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (ll i = 1; i < n; i++)
    {
        x[i] += x[i - 1];
        y[i] += y[i - 1];
    }
    for (ll i = 1; i < n; i++)
    {
        ans -= 2 * (m - (x[i] - x[i - 1]) + m - (y[i] - y[i - 1]));
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