// Problem: Who's Opposite?
// Link to the problem: https://codeforces.com/contest/1560/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    const ll d = abs(a - b), n = 2 * d;
    if (a > n || b > n || c > n)
    {
        cout << -1 << endl;
    }
    else
    {
        const ll ans = c + d > n ? c - d : c + d;
        cout << ans << endl;
    }
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