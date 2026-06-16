// Problem: Rule of League
// Link to the problem: https://codeforces.com/contest/1733/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    if ((x == 0 && y == 0) || (x != 0 && y != 0))
    {
        cout << -1 << endl;
        return;
    }
    if (x == 0)
    {
        if ((n - 1) % y == 0)
        {
            const ll k = (n - 1) / y;
            ll z = 1;
            for (ll i = 0; i < k; i++)
            {
                for (ll j = 0; j < y; j++)
                {
                    cout << z << " ";
                }
                if (i == 0)
                {
                    z += y + 1;
                }
                else
                {
                    z += y;
                }
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else if (y == 0)
    {
        if ((n - 1) % x == 0)
        {
            const ll k = (n - 1) / x;
            ll z = 1;
            for (ll i = 0; i < k; i++)
            {
                for (ll j = 0; j < x; j++)
                {
                    cout << z << " ";
                }
                if (i == 0)
                {
                    z += x + 1;
                }
                else
                {
                    z += x;
                }
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
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