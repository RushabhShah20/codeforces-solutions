// Problem: Tetris
// Link to the problem: https://codeforces.com/contest/961/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        a[x - 1]++;
    }
    ll ans = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ans = min(ans, a[i]);
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