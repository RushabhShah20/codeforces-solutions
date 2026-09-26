// Problem: Kill the Monster
// Link to the problem: https://codeforces.com/contest/1633/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll hc, dc, hm, dm, k, a, b;
    cin >> hc >> dc >> hm >> dm >> k >> a >> b;
    for (ll i = 0; i <= k; i++)
    {
        const ll x = hc + i * b, y = dc + (k - i) * a;
        if ((hm + y - 1) / y <= (x + dm - 1) / dm)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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