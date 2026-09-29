// Problem: Binary Matrix
// Link to the problem: https://codeforces.com/contest/2082/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (ll j = 0; j < m; j++)
        {
            const ll z = s[j] - '0';
            a[i] ^= z;
            b[j] ^= z;
        }
    }
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        x += a[i];
    }
    for (ll j = 0; j < m; j++)
    {
        y += b[j];
    }
    const ll ans = max(x, y);
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