// Problem: Index and Maximum Value
// Link to the problem: https://codeforces.com/contest/2007/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ans = max(ans, x);
    }
    for (ll i = 0; i < m; i++)
    {
        char c;
        ll l, r;
        cin >> c >> l >> r;
        if (l <= ans && ans <= r)
        {
            ans += c == '+' ? 1 : -1;
        }
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