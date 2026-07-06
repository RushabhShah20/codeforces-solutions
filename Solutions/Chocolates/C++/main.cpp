// Problem: Chocolates
// Link to the problem: https://codeforces.com/contest/1139/problem/B
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
    ll ans = 0, mn = LLONG_MAX;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] < mn)
        {
            ans += a[i];
            mn = a[i];
        }
        else
        {
            ans += mn;
        }
        mn = max(mn - 1, 0LL);
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
    solve();
    return 0;
}