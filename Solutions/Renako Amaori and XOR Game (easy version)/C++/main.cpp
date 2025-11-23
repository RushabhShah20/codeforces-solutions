// Problem: Renako Amaori and XOR Game (easy version)
// Link to the problem: https://codeforces.com/contest/2171/problem/C1
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int x = 0;
    int y = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            x++;
            y = i;
        }
    }
    if (x % 2 == 0)
    {
        cout << "Tie" << endl;
        return;
    }
    if (y % 2 == 0)
    {
        cout << "Ajisai" << endl;
    }
    else
    {
        cout << "Mai" << endl;
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