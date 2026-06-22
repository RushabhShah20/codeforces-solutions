// Problem: Good Arrays
// Link to the problem: https://codeforces.com/contest/1856/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll y = 0, z = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        y += x;
        z += x == 1 ? 1 : 0;
    }
    if (n == 1)
    {
        cout << "NO" << endl;
        return;
    }
    const string ans = y >= n + z ? "YES" : "NO";
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