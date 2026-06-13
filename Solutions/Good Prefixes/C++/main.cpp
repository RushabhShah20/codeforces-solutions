// Problem: Good Prefixes
// Link to the problem: https://codeforces.com/contest/1985/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), p(n + 1, 0), mx(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        p[i + 1] = p[i] + a[i];
        mx[i] = i == 0 ? a[i] : max(mx[i - 1], a[i]);
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (p[i] == 2 * mx[i - 1])
        {
            ans++;
        }
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}