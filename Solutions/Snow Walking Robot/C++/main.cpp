// Problem: Snow Walking Robot
// Link to the problem: https://codeforces.com/contest/1272/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll l = 0, r = 0, u = 0, d = 0;
    for (ll i = 0; i < n; i++)
    {
        l += s[i] == 'L' ? 1 : 0;
        r += s[i] == 'R' ? 1 : 0;
        u += s[i] == 'U' ? 1 : 0;
        d += s[i] == 'D' ? 1 : 0;
    }
    ll x = min(l, r), y = min(u, d);
    x = y == 0 ? (x == 0 ? 0 : 1) : x;
    y = x == 0 ? (y == 0 ? 0 : 1) : y;
    const ll z = x + y;
    cout << 2 * z << endl;
    string ans;
    ans.append(x, 'L');
    ans.append(y, 'U');
    ans.append(x, 'R');
    ans.append(y, 'D');
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