// Problem: Having Been a Treasurer in the Past, I Help Goblins Deceive
// Link to the problem: https://codeforces.com/contest/2072/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '-')
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    const ll ans = (x & 1 ? x / 2 * (x + 1) / 2 : x / 2 * (x / 2)) * y;
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