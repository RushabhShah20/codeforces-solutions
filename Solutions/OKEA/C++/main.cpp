// Problem: OKEA
// Link to the problem: https://codeforces.com/contest/1634/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n & 1 && k > 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        ll x = 1, y = 2;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < k; j++)
            {
                if (i & 1)
                {
                    cout << y << " ";
                    y += 2;
                }
                else
                {
                    cout << x << " ";
                    x += 2;
                }
            }
            cout << endl;
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