// Problem: Seat Arrangements
// Link to the problem: https://codeforces.com/contest/919/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    ll ans = 0;
    if (k == 1)
    {
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                ans += s[i][j] == '.';
            }
        }
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            ll x = 0;
            for (ll j = 0; j < m; j++)
            {
                if (s[i][j] == '.')
                {
                    x++;
                }
                else
                {
                    ans += max(0LL, x - k + 1);
                    x = 0;
                }
            }
            ans += max(0LL, x - k + 1);
        }
        for (ll j = 0; j < m; j++)
        {
            ll y = 0;
            for (ll i = 0; i < n; i++)
            {
                if (s[i][j] == '.')
                {
                    y++;
                }
                else
                {
                    ans += max(0LL, y - k + 1);
                    y = 0;
                }
            }
            ans += max(0LL, y - k + 1);
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
    solve();
    return 0;
}