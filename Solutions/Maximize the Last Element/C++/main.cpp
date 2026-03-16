// Problem: Maximize the Last Element
// Link to the problem: https://codeforces.com/contest/1991/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, m;
    cin >> a >> b >> c >> m;
    ll x = 0, y = 0, z = 0;
    for (ll i = 1; i <= m; i++)
    {
        if (i % a == 0)
        {
            if (i % b == 0)
            {
                if (i % c == 0)
                {
                    x += 2;
                    y += 2;
                    z += 2;
                }
                else
                {
                    x += 3;
                    y += 3;
                }
            }
            else
            {
                if (i % c == 0)
                {
                    x += 3;
                    z += 3;
                }
                else
                {
                    x += 6;
                }
            }
        }
        else
        {
            if (i % b == 0)
            {
                if (i % c == 0)
                {
                    y += 3;
                    z += 3;
                }
                else
                {
                    y += 6;
                }
            }
            else
            {
                z += 6;
            }
        }
    }
    cout << x << " " << y << " " << z << endl;
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