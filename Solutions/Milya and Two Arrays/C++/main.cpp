// Problem: Milya and Two Arrays
// Link to the problem: https://codeforces.com/contest/2059/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_set<ll> a, b;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.insert(x);
    }
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        b.insert(x);
    }
    const string ans = a.size() >= 3 || b.size() >= 3 || a.size() >= 2 && b.size() >= 2 ? "YES" : "NO";
    cout << ans << endl;
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