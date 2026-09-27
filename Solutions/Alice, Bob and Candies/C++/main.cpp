// Problem: Alice, Bob and Candies
// Link to the problem: https://codeforces.com/contest/1352/problem/D
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
    ll k = 0, x = 0, y = 0;
    ll l = 0, r = n - 1, p = 0, q = 0;
    while (l <= r)
    {
        if (k & 1)
        {
            while (l <= r && q <= p)
            {
                q += a[r];
                y += a[r];
                r--;
            }
            p = 0;
        }
        else
        {
            while (l <= r && p <= q)
            {
                p += a[l];
                x += a[l];
                l++;
            }
            q = 0;
        }
        k++;
    }
    cout << k << " " << x << " " << y << endl;
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