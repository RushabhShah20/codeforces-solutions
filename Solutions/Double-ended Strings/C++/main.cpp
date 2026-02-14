// Problem: Double-ended Strings
// Link to the problem: https://codeforces.com/contest/1506/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    const ll m = a.size(), n = b.size();
    ll x = 0;
    for (ll k = 1; k <= min(m, n); k++)
    {
        for (ll i = 0; i < m - k + 1; i++)
        {
            for (ll j = 0; j < n - k + 1; j++)
            {
                const string c = a.substr(i, k), d = b.substr(j, k);
                if (c == d)
                {
                    x = max(x, k);
                }
            }
        }
    }
    const ll ans = m + n - 2 * x;
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