// Problem: Odd/Even Increments
// Link to the problem: https://codeforces.com/contest/1669/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    bool a = true, b = true, c = true, d = true;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i % 2 == 0)
        {
            if (x % 2 == 0)
            {
                a = false;
            }
            else
            {
                b = false;
            }
        }
        else
        {
            if (x % 2 == 0)
            {
                c = false;
            }
            else
            {
                d = false;
            }
        }
    }
    if (a && c || b && d || a && d || b && c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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