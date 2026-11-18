// Problem: Array Fix
// Link to the problem: https://codeforces.com/contest/1948/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    b.push_back(a[n - 1]);
    for (ll i = n - 2; i >= 0; i--)
    {
        if (a[i] > b.back())
        {
            ll x = a[i];
            while (x > 0)
            {
                b.push_back(x % 10);
                x /= 10;
            }
        }
        else
        {
            b.push_back(a[i]);
        }
    }
    const ll m = b.size();
    for (ll i = m - 2; i >= 0; i--)
    {
        if (b[i] < b[i + 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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