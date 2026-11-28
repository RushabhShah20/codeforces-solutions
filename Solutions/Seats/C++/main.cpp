// Problem: Seats
// Link to the problem: https://codeforces.com/contest/2188/problem/B
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
    s = '1' + s + '1';
    ll ans = 0, i = 0;
    for (ll j = 1; j <= n; j++)
    {
        if (s[j] == '0')
        {
            if (s[j - 1] == '1')
            {
                i = j;
            }
            if (s[j + 1] == '1')
            {
                const ll x = j - i + 1 + (i == 1) + (j == n);
                ans += x / 3;
            }
        }
        else
        {
            ans++;
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