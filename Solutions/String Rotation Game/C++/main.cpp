// Problem: String Rotation Game
// Link to the problem: https://codeforces.com/contest/2192/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        const string t = s.substr(i, n - i) + s.substr(0, i);
        ll x = 0, y = 1;
        for (ll j = 1; j < n; j++)
        {
            if (t[j] == t[j - 1])
            {
                y++;
            }
            else
            {
                x++;
                y = 1;
            }
        }
        x++;
        ans = max(ans, x);
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