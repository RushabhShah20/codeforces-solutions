// Problem: Neko Finds Grapes
// Link to the problem: https://codeforces.com/contest/1152/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a = 0, b = 0, x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z & 1)
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    for (ll i = 0; i < m; i++)
    {
        ll z;
        cin >> z;
        if (z & 1)
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    const ll ans = min(a, y) + min(b, x);
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