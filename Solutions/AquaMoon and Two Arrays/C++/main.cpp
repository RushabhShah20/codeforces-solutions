// Problem: AquaMoon and Two Arrays
// Link to the problem: https://codeforces.com/contest/1546/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        y += b[i];
    }
    if (x == y)
    {
        vector<ll> c, d;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                for (ll j = 0; j < a[i] - b[i]; j++)
                {
                    c.push_back(i + 1);
                }
            }
            else if (a[i] < b[i])
            {
                for (ll j = 0; j < b[i] - a[i]; j++)
                {
                    d.push_back(i + 1);
                }
            }
        }
        const ll m = c.size();
        cout << m << endl;
        for (ll i = 0; i < m; i++)
        {
            cout << c[i] << " " << d[i] << endl;
        }
    }
    else
    {
        cout << -1 << endl;
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