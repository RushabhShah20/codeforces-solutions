// Problem: Lady Bug
// Link to the problem: https://codeforces.com/contest/2092/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        x += (i & 1 && b[i] == '0') || (!(i & 1) && a[i] == '0') ? 1 : 0;
        y += (i & 1 && a[i] == '0') || (!(i & 1) && b[i] == '0') ? 1 : 0;
    }
    const string ans = x >= (n + 1) / 2 && y >= n / 2 ? "YES" : "NO";
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