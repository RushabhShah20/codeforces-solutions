// Problem: Distinct Buttons
// Link to the problem: https://codeforces.com/contest/1909/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    bool a = false, b = false, c = false, d = false;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (x > 0)
        {
            a = true;
        }
        else if (x < 0)
        {
            b = true;
        }
        if (y > 0)
        {
            c = true;
        }
        else if (y < 0)
        {
            d = true;
        }
    }
    if (a && b && c && d)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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