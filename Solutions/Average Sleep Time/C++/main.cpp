// Problem: Average Sleep Time
// Link to the problem: https://codeforces.com/contest/808/problem/B
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
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i >= k)
        {
            x += a[i];
            x -= a[i - k];
        }
        else
        {
            x += a[i];
        }
        if (i >= k - 1)
        {
            y += x;
        }
    }
    const long double ans = (long double)y / (n - k + 1);
    cout << fixed << setprecision(15) << ans << endl;
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