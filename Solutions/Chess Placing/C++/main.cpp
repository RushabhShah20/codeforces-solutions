// Problem: Chess Placing
// Link to the problem: https://codeforces.com/contest/985/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const ll m = n / 2;
    vector<ll> a(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll x = 0, y = 0;
    for (ll i = 0; i < m; i++)
    {
        x += abs(2 * i + 1 - a[i]);
    }
    for (ll i = 0; i < m; i++)
    {
        y += abs(2 * i + 2 - a[i]);
    }
    const ll ans = min(x, y);
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