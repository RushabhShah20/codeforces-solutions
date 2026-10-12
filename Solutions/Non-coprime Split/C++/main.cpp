// Problem: Non-coprime Split
// Link to the problem: https://codeforces.com/contest/1872/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    if (r <= 3)
    {
        cout << -1 << endl;
        return;
    }
    if (l == r && l & 1)
    {
        for (ll i = 2; i * i <= r; i++)
        {
            if (r % i == 0)
            {
                const ll x = i, y = r - x;
                cout << x << " " << y << endl;
                return;
            }
        }
        cout << -1 << endl;
        return;
    }
    const ll x = r & 1 ? (r - 1) >> 1 : r >> 1, y = r & 1 ? (r - 1) >> 1 : r >> 1;
    cout << x << " " << y << endl;
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