// Problem: Shell Game
// Link to the problem: https://codeforces.com/contest/35/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll ans;
    cin >> ans;
    for (ll i = 0; i < 3; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (x == ans)
        {
            ans = y;
        }
        else if (y == ans)
        {
            ans = x;
        }
    }
    cout << ans << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}