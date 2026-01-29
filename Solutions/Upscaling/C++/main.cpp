// Problem: Upscaling
// Link to the problem: https://codeforces.com/contest/1950/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const ll m = 2 * n;
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if ((i % 4 < 2 && j % 4 < 2) || (i % 4 >= 2 && j % 4 >= 2))
            {
                cout << "#";
            }
            else
            {
                cout << ".";
            }
        }
        cout << endl;
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