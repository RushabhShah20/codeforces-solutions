// Problem: Even Subset Sum Problem
// Link to the problem: https://codeforces.com/contest/1323/problem/A
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
    for (ll i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << 1 << endl;
            cout << i + 1 << endl;
            return;
        }
    }
    for (ll i = 1; i < n; i++)
    {
        if (a[i - 1] % 2 == a[i] % 2)
        {
            cout << 2 << endl;
            cout << i << " " << i + 1 << endl;
            return;
        }
    }
    cout << "-1" << endl;
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