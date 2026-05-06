// Problem: Maximum Substring
// Link to the problem: https://codeforces.com/contest/1750/problem/B
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
    ll a = 0, b = 0, x = 0, y = 0, mxx = 0, mxy = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            a++;
            x++;
            y = 0;
        }
        else
        {
            b++;
            y++;
            x = 0;
        }
        mxx = max(mxx, x);
        mxy = max(mxy, y);
    }
    const ll ans = max({a * b, mxx * mxx, mxy * mxy});
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