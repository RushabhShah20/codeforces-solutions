// Problem: Integer Points
// Link to the problem: https://codeforces.com/contest/1248/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a = 0, b = 0, c = 0, d = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        x & 1 ? a++ : b++;
    }
    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll y;
        cin >> y;
        y & 1 ? c++ : d++;
    }
    const ll ans = a * c + b * d;
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