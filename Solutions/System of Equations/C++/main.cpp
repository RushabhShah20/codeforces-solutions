// Problem: System of Equations
// Link to the problem: https://codeforces.com/contest/214/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, ans = 0;
    cin >> n >> m;
    for (ll i = 0; i <= n; i++)
    {
        for (ll j = 0; j <= m; j++)
        {
            if (i * i + j == n && i + j * j == m)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}