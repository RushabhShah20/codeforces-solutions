// Problem: Good Pairs
// Link to the problem: https://codeforces.com/contest/1656/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mn = LLONG_MAX, mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    ll x = -1, y = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == mn)
        {
            x = i;
        }
        if (a[i] == mx)
        {
            y = i;
        }
    }
    cout << x + 1 << " " << y + 1 << endl;
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