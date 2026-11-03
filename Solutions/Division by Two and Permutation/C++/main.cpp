// Problem: Division by Two and Permutation
// Link to the problem: https://codeforces.com/contest/1624/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<bool> b(n + 1, false);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<>());
    for (ll i = 0; i < n; i++)
    {
        ll x = a[i];
        while (x > n || (x > 0 && b[x]))
        {
            x >>= 1;
        }
        if (x > 0)
        {
            b[x] = true;
        }
        else
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