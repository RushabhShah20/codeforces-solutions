// Problem: Notelock
// Link to the problem: https://codeforces.com/contest/2154/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll ans = 0;
    ll x = -k;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (i > x + k - 1)
            {
                ans++;
            }
            x = i;
        }
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}