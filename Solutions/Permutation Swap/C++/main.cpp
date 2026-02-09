// Problem: Permutation Swap
// Link to the problem: https://codeforces.com/contest/1828/problem/B
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
    ll ans = abs(a[0] - 1);
    for (ll i = 1; i < n; i++)
    {
        ans = __gcd(ans, abs(a[i] - (i + 1)));
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