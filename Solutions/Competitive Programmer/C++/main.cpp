// Problem: Competitive Programmer
// Link to the problem: https://codeforces.com/contest/1266/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll x = 0, y = 0, z = 0;
    for (ll i = 0; i < n; i++)
    {
        const ll a = s[i] - '0';
        x += a;
        y += !(a & 1);
        z += a == 0;
    }
    const string ans = z > 0 && x % 3 == 0 && y >= 2 ? "red" : "cyan";
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