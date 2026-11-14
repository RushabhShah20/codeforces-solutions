// Problem: Matrix Game
// Link to the problem: https://codeforces.com/contest/1365/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<bool> a(n, true), b(m, true);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            if (x == 1)
            {
                a[i] = false;
                b[j] = false;
            }
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
    const ll z = min(x, y);
    const string ans = z & 1 ? "Ashish" : "Vivek";
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