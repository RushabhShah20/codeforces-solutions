// Problem: New Year Transportation
// Link to the problem: https://codeforces.com/contest/500/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> a(n - 1);
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    ll x = 1;
    while (x < t)
    {
        x += a[x - 1];
    }
    if (x == t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}