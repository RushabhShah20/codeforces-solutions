// Problem: Jellyfish and Undertale
// Link to the problem: https://codeforces.com/contest/1875/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> x(n);
    ll ans = b;
    for (ll i = 0; i < n; i++)
    {
        cin >> x[i];
        ans += min(a - 1, x[i]);
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