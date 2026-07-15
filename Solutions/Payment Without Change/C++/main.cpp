// Problem: Payment Without Change
// Link to the problem: https://codeforces.com/contest/1256/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, n, s;
    cin >> a >> b >> n >> s;
    const ll x = min(a, s / n), y = s - n * x;
    const string ans = y >= 0 && y <= b ? "YES" : "NO";
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