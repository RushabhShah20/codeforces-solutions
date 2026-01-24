// Problem: Forbidden Integer
// Link to the problem: https://codeforces.com/contest/1845/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for (ll i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
    else
    {
        if (k == 1 || (k == 2 && n % 2 != 0))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            if (n % 2 == 0)
            {
                cout << n / 2 << endl;
                for (ll i = 0; i < n / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << endl;
            }
            else
            {
                cout << (((n - 3) / 2) + 1) << endl;
                for (ll i = 0; i < (((n - 3) / 2) + 1); i++)
                {
                    cout << 2 << " ";
                }
                cout << 3 << endl;
            }
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}