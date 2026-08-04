// Problem: Wet Shark and Bishops
// Link to the problem: https://codeforces.com/contest/621/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> a, b;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        a[x + y]++;
        b[x - y]++;
    }
    ll ans = 0;
    for (const pair<ll, ll> i : a)
    {
        ans += i.second * (i.second - 1) / 2;
    }
    for (const pair<ll, ll> i : b)
    {
        ans += i.second * (i.second - 1) / 2;
    }
    cout << ans << endl;
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