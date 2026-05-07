// Problem: Circle Line
// Link to the problem: https://codeforces.com/contest/278/problem/A
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
    ll s, t, x = 0, y = 0;
    cin >> s >> t;
    x = min(s, t);
    y = max(s, t);
    s = x;
    t = y;
    x = 0;
    y = 0;
    s--;
    t--;
    for (ll i = s; i < t; i++)
    {
        x += a[i];
    }
    for (ll i = t; i < n; i++)
    {
        y += a[i];
    }
    for (ll i = 0; i < s; i++)
    {
        y += a[i];
    }
    const ll ans = min(x, y);
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