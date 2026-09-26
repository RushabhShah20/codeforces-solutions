// Problem: Eating Candies
// Link to the problem: https://codeforces.com/contest/1669/problem/F
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
    ll ans = 0, x = a[0], y = a[n - 1], l = 0, r = n - 1;
    while (l < r)
    {
        if (x == y)
        {
            ans = max(ans, l + 1 + n - r);
        }
        if (x <= y)
        {
            l++;
            x += a[l];
        }
        else
        {
            r--;
            y += a[r];
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