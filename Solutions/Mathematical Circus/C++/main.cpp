// Problem: Mathematical Circus
// Link to the problem: https://codeforces.com/contest/1719/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k == 0 || k % 4 == 0)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    if (k & 1)
    {
        for (ll i = 1; i <= n; i += 2)
        {
            cout << i << " " << i + 1 << endl;
        }
    }
    else
    {
        for (ll i = 2; i <= n; i += 2)
        {
            if (i % 4 == 0)
            {
                cout << i - 1 << " " << i << endl;
            }
            else
            {
                cout << i << " " << i - 1 << endl;
            }
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}