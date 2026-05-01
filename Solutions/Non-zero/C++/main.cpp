// Problem: Non-zero
// Link to the problem: https://codeforces.com/contest/1300/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = 0, y = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z == 0)
        {
            y++;
        }
        x += z;
    }
    x += y;
    const ll ans = y + (x == 0 ? 1 : 0);
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