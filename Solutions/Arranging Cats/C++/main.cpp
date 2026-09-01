// Problem: Arranging Cats
// Link to the problem: https://codeforces.com/contest/1921/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        x += a[i] == '1' ? 1 : 0;
        y += b[i] == '1' ? 1 : 0;
    }
    if (x > y)
    {
        ll z = x - y, ans = z;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == '1' && b[i] == '0')
            {
                if (z > 0)
                {
                    a[i] = '0';
                    z--;
                }
            }
        }
        ll w = 0;
        for (ll i = 0; i < n; i++)
        {
            w += a[i] == b[i] ? 0 : 1;
        }
        ans += w / 2;
        cout << ans << endl;
    }
    else if (x < y)
    {
        ll z = y - x, ans = z;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == '0' && b[i] == '1')
            {
                if (z > 0)
                {
                    a[i] = '1';
                    z--;
                }
            }
        }
        ll w = 0;
        for (ll i = 0; i < n; i++)
        {
            w += a[i] == b[i] ? 0 : 1;
        }
        ans += w / 2;
        cout << ans << endl;
    }
    else
    {
        ll w = 0;
        for (ll i = 0; i < n; i++)
        {
            w += a[i] == b[i] ? 0 : 1;
        }
        const ll ans = w / 2;
        cout << ans << endl;
    }
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