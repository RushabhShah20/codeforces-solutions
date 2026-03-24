// Problem: Cakeminator
// Link to the problem: https://codeforces.com/contest/330/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, x = 0, y = 0;
    cin >> n >> m;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (ll i = 0; i < n; i++)
    {
        ll a = 0;
        for (ll j = 0; j < m; j++)
        {
            if (s[i][j] == 'S')
            {
                a++;
            }
        }
        if (a == 0)
        {
            x++;
        }
    }
    for (ll j = 0; j < m; j++)
    {
        ll a = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i][j] == 'S')
            {
                a++;
            }
        }
        if (a == 0)
        {
            y++;
        }
    }
    const ll ans = x * m + y * n - x * y;
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