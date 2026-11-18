// Problem: Tear It Apart
// Link to the problem: https://codeforces.com/contest/1821/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll calculate(ll n)
{
    ll ans = 0;
    while (n > 0)
    {
        ans++;
        n >>= 1;
    }
    return ans;
}

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll ans = n + 1;
    for (char j = 'a'; j <= 'z'; j++)
    {
        ll x = 0, y = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == j)
            {
                y = max(y, x);
                x = 0;
            }
            else
            {
                x++;
            }
        }
        y = max(y, x);
        ans = min(ans, calculate(y));
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