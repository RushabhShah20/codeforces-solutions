// Problem: New Building for SIS
// Link to the problem: https://codeforces.com/contest/1020/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, a, b, k;
    cin >> n >> m >> a >> b >> k;
    for (ll i = 0; i < k; i++)
    {
        ll xa, ya, xb, yb;
        cin >> xa >> ya >> xb >> yb;
        if (ya > yb)
        {
            swap(ya, yb);
        }
        const ll ans = xa == xb ? abs(ya - yb) : (abs(xa - xb) + (yb < a ? (2 * a - (ya + yb)) : (ya > b ? (ya + yb - 2 * b) : (yb - ya))));
        cout << ans << endl;
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