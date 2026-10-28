// Problem: Yarik and Array
// Link to the problem: https://codeforces.com/contest/1899/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = a[0], x = a[0];
    for (ll i = 1; i < n; i++)
    {
        if ((a[i] & 1) == (a[i - 1] & 1) || x < 0)
        {
            x = a[i];
        }
        else
        {
            x += a[i];
        }
        ans = max(ans, x);
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