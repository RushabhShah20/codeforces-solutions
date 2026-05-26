// Problem: Increasing and Decreasing
// Link to the problem: https://codeforces.com/contest/1864/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, n;
    cin >> x >> y >> n;
    const ll z = (n - 1) * n / 2;
    if (x + z > y)
    {
        cout << -1 << endl;
        return;
    }
    vector<ll> ans(n);
    ans[0] = x;
    ans[n - 1] = y;
    ll a = 1;
    for (ll i = n - 2; i >= 1; i--)
    {
        ans[i] = ans[i + 1] - a;
        a++;
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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