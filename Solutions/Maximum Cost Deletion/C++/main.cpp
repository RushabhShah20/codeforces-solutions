// Problem: Maximum Cost Deletion
// Link to the problem: https://codeforces.com/contest/1550/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    ll x = 1;
    for (ll i = 1; i < n; i++)
    {
        x += s[i] != s[i - 1];
    }
    const ll ans = n * a + max(n * b, ((x >> 1) + 1) * b);
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