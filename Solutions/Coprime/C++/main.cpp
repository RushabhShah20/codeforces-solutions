// Problem: Coprime
// Link to the problem: https://codeforces.com/contest/1742/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(1000, -1);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x - 1] = i + 1;
    }
    ll ans = -1;
    for (ll i = 0; i < 1000; i++)
    {
        if (a[i] == -1)
        {
            continue;
        }
        for (ll j = i; j < 1000; j++)
        {
            if (a[j] == -1)
            {
                continue;
            }
            if (__gcd(i + 1, j + 1) == 1)
            {
                ans = max(ans, a[i] + a[j]);
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