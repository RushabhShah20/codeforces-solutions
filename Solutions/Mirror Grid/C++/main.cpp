// Problem: Mirror Grid
// Link to the problem: https://codeforces.com/contest/1703/problem/E
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    ll ans = 0;
    for (ll i = 0; i < n >> 1; i++)
    {
        for (ll j = 0; j < (n + 1) >> 1; j++)
        {
            const ll a = s[i][j] - '0', b = s[n - 1 - j][i] - '0', c = s[j][n - 1 - i] - '0', d = s[n - 1 - i][n - 1 - j] - '0';
            const ll x = (a == 0) + (b == 0) + (c == 0) + (d == 0);
            ans += min(x, 4 - x);
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