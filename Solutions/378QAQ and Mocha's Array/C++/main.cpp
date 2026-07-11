// Problem: 378QAQ and Mocha's Array
// Link to the problem: https://codeforces.com/contest/1975/problem/B
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
    ll x = a[0], y = 0;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] % x != 0)
        {
            y = a[i];
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] % x != 0 && a[i] % y != 0)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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