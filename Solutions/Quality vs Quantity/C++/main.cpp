// Problem: Quality vs Quantity
// Link to the problem: https://codeforces.com/contest/1646/problem/B
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
    sort(a.begin(), a.end());
    ll x = a[0], y = 0, l = 1, r = n - 1;
    while (l <= r)
    {
        x += a[l];
        y += a[r];
        if (y > x)
        {
            cout << "YES" << endl;
            return;
        }
        l++;
        r--;
    }
    cout << "NO" << endl;
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