// Problem: Nezzar and Lucky Number
// Link to the problem: https://codeforces.com/contest/1478/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(10, 10 * k);
    for (ll i = 1; i <= 10; i++)
    {
        a[(i * k) % 10] = min(a[(i * k) % 10], i * k);
    }
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        const string ans = x >= a[x % 10] ? "YES" : "NO";
        cout << ans << endl;
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