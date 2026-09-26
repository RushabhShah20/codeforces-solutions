// Problem: 2-Letter Strings
// Link to the problem: https://codeforces.com/contest/1669/problem/E
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(11, vector<ll>(11));
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        const ll x = s[0] - 'a', y = s[1] - 'a';
        for (ll j = 0; j < 11; j++)
        {
            if (j != x)
            {
                ans += a[j][y];
            }
            if (j != y)
            {
                ans += a[x][j];
            }
        }
        a[x][y]++;
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