// Problem: Trust Nobody
// Link to the problem: https://codeforces.com/contest/1826/problem/A
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
    for (ll j = 0; j <= n; j++)
    {
        ll k = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] > j)
            {
                k++;
            }
        }
        if (j == k)
        {
            cout << k << endl;
            return;
        }
    }
    cout << -1 << endl;
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