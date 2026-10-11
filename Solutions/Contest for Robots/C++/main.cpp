// Problem: Contest for Robots
// Link to the problem: https://codeforces.com/contest/1321/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        x += a[i] == 1 && b[i] == 0;
        y += a[i] == 0 && b[i] == 1;
    }
    const ll ans = x == 0 ? -1 : (x + y) / x;
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