// Problem: Flipping Game
// Link to the problem: https://codeforces.com/contest/327/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0, y = 0, z = -1;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        if (a == 0)
        {
            y++;
            z = max(z, y);
        }
        else
        {
            x++;
            y = max(0LL, y - 1);
        }
    }
    const ll ans = x + z;
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