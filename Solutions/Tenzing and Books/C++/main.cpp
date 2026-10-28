// Problem: Tenzing and Books
// Link to the problem: https://codeforces.com/contest/1842/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll x = 0;
    for (ll i = 0; i < 3; i++)
    {
        bool z = true;
        for (ll j = 0; j < n; j++)
        {
            ll y;
            cin >> y;
            if (z)
            {
                if ((y | k) == k)
                {
                    x |= y;
                }
                else
                {
                    z = false;
                }
            }
        }
    }
    const string ans = x == k ? "Yes" : "No";
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