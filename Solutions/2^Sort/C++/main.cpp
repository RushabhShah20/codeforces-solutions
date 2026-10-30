// Problem: 2^Sort
// Link to the problem: https://codeforces.com/contest/1692/problem/G
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
    ll ans = 0, x = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1] << 1)
        {
            x++;
        }
        else
        {
            x = 0;
        }
        if (x >= k)
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