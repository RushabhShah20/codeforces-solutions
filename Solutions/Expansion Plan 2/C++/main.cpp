// Problem: Expansion Plan 2
// Link to the problem: https://codeforces.com/contest/2157/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    ll a = 0, b = 0;
    for (ll i = 0; i < n; i++)
    {
        s[i] == '4' ? a++ : b++;
    }
    const string ans = a + 2 * b < abs(x) + abs(y) || a + b < max(abs(x), abs(y)) ? "NO" : "YES";
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