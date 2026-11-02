// Problem: Presents
// Link to the problem: https://codeforces.com/contest/54/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll m;
    cin >> m;
    ll ans = m, y = 0;
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        ans += (x - y - 1) / k;
        y = x;
    }
    ans += (n - y) / k;
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