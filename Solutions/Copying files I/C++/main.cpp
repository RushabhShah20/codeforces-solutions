// Problem: Copying files I
// Link to the problem: https://codeforces.com/contest/1769/problem/B1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll w = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        w += a[i];
    }
    vector<bool> b(101, false);
    b[0] = true;
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 1; j <= a[i]; j++)
        {
            const ll y = 100 * j / a[i], z = 100 * (x + j) / w;
            if (y == z)
            {
                b[y] = true;
            }
        }
        x += a[i];
    }
    for (ll i = 0; i <= 100; i++)
    {
        if (b[i])
        {
            cout << i << endl;
        }
    }
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