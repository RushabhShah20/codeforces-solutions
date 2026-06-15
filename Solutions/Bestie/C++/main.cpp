// Problem: Bestie
// Link to the problem: https://codeforces.com/contest/1732/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll g;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        g = i == 0 ? a[i] : __gcd(g, a[i]);
    }
    if (g == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (__gcd(g, __gcd(a[n - 1], n)) == 1)
    {
        cout << 1 << endl;
        return;
    }
    if (__gcd(g, __gcd(a[n - 2], n - 1)) == 1)
    {
        cout << 2 << endl;
        return;
    }
    cout << 3 << endl;
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