// Problem: Fair Division
// Link to the problem: https://codeforces.com/contest/1472/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = 0, y = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z == 1)
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    if (y % 2 == 0)
    {
        if (x % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else
    {
        if (x >= 2 && (x - 2) % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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