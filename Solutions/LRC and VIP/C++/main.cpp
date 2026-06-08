// Problem: LRC and VIP
// Link to the problem: https://codeforces.com/contest/2107/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mx = LLONG_MIN, mn = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    if (mn == mx)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
        for (ll i = 0; i < n; i++)
        {
            const ll x = a[i] == mx ? 2 : 1;
            cout << x << " ";
        }
        cout << endl;
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