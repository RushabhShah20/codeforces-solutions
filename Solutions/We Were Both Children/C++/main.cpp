// Problem: We Were Both Children
// Link to the problem: https://codeforces.com/contest/1850/problem/F
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x <= n)
        {
            a[x]++;
        }
    }
    vector<ll> b(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            continue;
        }
        for (ll j = i; j <= n; j += i)
        {
            b[j] += a[i];
        }
    }
    ll ans = 0;
    for (ll j = 1; j <= n; j++)
    {
        ans = max(ans, b[j]);
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