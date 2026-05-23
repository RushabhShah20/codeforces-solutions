// Problem: Be Positive
// Link to the problem: https://codeforces.com/contest/1130/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z > 0)
        {
            x++;
        }
        else if (z < 0)
        {
            y++;
        }
    }
    const ll ans = x >= (n + 1) / 2 ? 1 : (y >= (n + 1) / 2 ? -1 : 0);
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