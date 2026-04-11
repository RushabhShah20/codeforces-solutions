// Problem: 2023
// Link to the problem: https://codeforces.com/contest/1916/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> b(n), a(k, 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll x = 1;
    for (ll i = 0; i < n; i++)
    {
        x *= b[i];
        if (2023 % x != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    a[0] = 2023 / x;
    cout << "YES" << endl;
    for (ll i = 0; i < k; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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