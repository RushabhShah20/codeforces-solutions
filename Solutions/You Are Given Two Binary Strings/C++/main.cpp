// Problem: You Are Given Two Binary Strings...
// Link to the problem: https://codeforces.com/contest/1202/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    const ll n = a.size(), m = b.size();
    ll y = 0;
    while (y < m && b[y] != '1')
    {
        y++;
    }
    ll x = y;
    while (x < n && a[x] != '1')
    {
        x++;
    }
    const ll ans = x - y;
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