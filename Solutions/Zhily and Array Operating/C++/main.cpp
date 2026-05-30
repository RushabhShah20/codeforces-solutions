// Problem: Zhily and Array Operating
// Link to the problem: https://codeforces.com/contest/2224/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    b[n - 1] = a[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        if (b[i + 1] >= 0)
        {
            b[i] = a[i] + b[i + 1];
        }
        else
        {
            b[i] = a[i];
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (b[i] > 0)
        {
            ans++;
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