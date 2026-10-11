// Problem: What is for dinner?
// Link to the problem: https://codeforces.com/contest/33/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(m, LLONG_MAX);
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (y < a[x - 1])
        {
            a[x - 1] = y;
        }
    }
    ll x = 0;
    for (ll i = 0; i < m; i++)
    {
        x += a[i];
    }
    const ll ans = min(x, k);
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