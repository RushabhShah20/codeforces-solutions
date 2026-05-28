// Problem: Space Navigation
// Link to the problem: https://codeforces.com/contest/1481/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    const ll n = s.size();
    ll u = 0, d = 0, l = 0, r = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'U')
        {
            u++;
        }
        if (s[i] == 'D')
        {
            d--;
        }
        if (s[i] == 'L')
        {
            l--;
        }
        if (s[i] == 'R')
        {
            r++;
        }
    }
    const string ans = l <= a && a <= r && d <= b && b <= u ? "YES" : "NO";
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