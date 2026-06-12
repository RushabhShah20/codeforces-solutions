// Problem: Nastya and Rice
// Link to the problem: https://codeforces.com/contest/1341/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    const ll x = n * (a - b), y = n * (a + b);
    const string ans = x <= c + d && y >= c - d ? "Yes" : "No";
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