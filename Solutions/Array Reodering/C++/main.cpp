// Problem: Array Reodering
// Link to the problem: https://codeforces.com/contest/10/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (!(a[i] & 1))
        {
            b.push_back(a[i]);
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] & 1)
        {
            b.push_back(a[i]);
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if (__gcd(b[i], 2 * b[j]) > 1)
            {
                ans++;
            }
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