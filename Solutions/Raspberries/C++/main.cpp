// Problem: Raspberries
// Link to the problem: https://codeforces.com/contest/1883/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll ans = INT_MAX, even = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            even++;
        }
        if (a[i] % k == 0)
        {
            ans = 0;
        }
        ans = min(ans, k - (a[i] % k));
    }
    if (k == 4)
    {
        if (even >= 2)
        {
            ans = min(ans, (long long)(0));
        }
        else if (even == 1)
        {
            ans = min(ans, (long long)(1));
        }
        else if (even == 0)
        {
            ans = min(ans, (long long)(2));
        }
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}