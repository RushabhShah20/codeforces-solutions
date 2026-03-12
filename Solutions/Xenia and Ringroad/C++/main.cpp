// Problem: Xenia and Ringroad
// Link to the problem: https://codeforces.com/contest/339/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, y = 0, ans = 0;
    cin >> n >> m;
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        if (i == 0)
        {
            ans += x - 1;
        }
        else
        {
            if (x < y)
            {
                ans += n - y + x;
            }
            else
            {
                ans += x - y;
            }
        }
        y = x;
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