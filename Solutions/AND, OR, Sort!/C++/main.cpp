// Problem: AND, OR, Sort!
// Link to the problem: https://codeforces.com/contest/2266/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == '1')
    {
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans += s[i] == '0';
        }
        cout << ans << endl;
        return;
    }
    vector<ll> a(n), b(n);
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        a[i] = x;
        x += s[i] == '1';
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        y += s[i] == '0';
        b[i] = y;
    }
    ll ans = min(x, y);
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ans = min(ans, a[i] + b[i]);
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