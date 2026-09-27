// Problem: String LCM
// Link to the problem: https://codeforces.com/contest/1473/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    ll n = s.size(), m = t.size();
    const ll k = __gcd(m, n);
    string x, y;
    while (n > 0)
    {
        x += t;
        n -= k;
    }
    while (m > 0)
    {
        y += s;
        m -= k;
    }
    const string ans = x == y ? x : "-1";
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