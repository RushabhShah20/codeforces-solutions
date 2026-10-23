// Problem: Yet Another Constructive
// Link to the problem: https://codeforces.com/contest/2247/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, m;
    cin >> n >> k >> m;
    if (k > m)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for (ll i = 1; i <= n; i++)
    {
        const ll ans = i % k == 0 ? m - k + 1 : 1;
        cout << ans << " ";
    }
    cout << endl;
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