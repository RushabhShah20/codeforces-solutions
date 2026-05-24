// Problem: Friends and Candies
// Link to the problem: https://codeforces.com/contest/1538/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    if (x % n != 0)
    {
        cout << -1 << endl;
        return;
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (x < n * a[i])
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