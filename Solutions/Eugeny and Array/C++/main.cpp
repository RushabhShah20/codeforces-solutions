// Problem: Eugeny and Array
// Link to the problem: https://codeforces.com/contest/302/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z == 1)
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    for (ll i = 0; i < m; i++)
    {
        ll l, r;
        cin >> l >> r;
        if (r - l + 1 & 1)
        {
            cout << 0 << endl;
        }
        else
        {
            const ll p = (r - l + 1) / 2;
            cout << (x >= p && y >= p) << endl;
        }
    }
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