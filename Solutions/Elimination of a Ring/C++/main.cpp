// Problem: Elimination of a Ring
// Link to the problem: https://codeforces.com/contest/1761/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    const ll ans = s.size() <= 2 ? (n >> 1) + 1 : n;
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