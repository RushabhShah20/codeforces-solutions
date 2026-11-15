// Problem: Madoka and Underground Competitions
// Link to the problem: https://codeforces.com/contest/1717/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    const ll z = (x + y) % m;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            const char ans = (i + j) % m == z ? 'X' : '.';
            cout << ans;
        }
        cout << endl;
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