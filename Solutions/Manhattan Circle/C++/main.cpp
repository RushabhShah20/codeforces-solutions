// Problem: Manhattan Circle
// Link to the problem: https://codeforces.com/contest/1985/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    ll mnx = LLONG_MAX, mxx = LLONG_MIN, mny = LLONG_MAX, mxy = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (s[i][j] == '#')
            {
                mnx = min(mnx, i + 1);
                mxx = max(mxx, i + 1);
                mny = min(mny, j + 1);
                mxy = max(mxy, j + 1);
            }
        }
    }
    const ll x = (mnx + mxx) / 2, y = (mny + mxy) / 2;
    cout << x << " " << y << endl;
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