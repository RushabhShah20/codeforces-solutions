// Problem: There Are Two Types Of Burgers
// Link to the problem: https://codeforces.com/contest/1207/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll b, p, f, h, c;
    cin >> b >> p >> f >> h >> c;
    ll ans = 0;
    for (ll i = 0; i <= p; i++)
    {
        for (ll j = 0; j <= f; j++)
        {
            if (2 * (i + j) <= b)
            {
                ans = max(ans, i * h + j * c);
            }
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