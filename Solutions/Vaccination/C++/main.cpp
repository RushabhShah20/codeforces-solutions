// Problem: Vaccination
// Link to the problem: https://codeforces.com/contest/1804/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<ll> c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    ll ans = 0, x = -1, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (y == 0 || c[i] > x)
        {
            ans++;
            x = c[i] + a + b;
            y = k - 1;
        }
        else
        {
            y--;
        }
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