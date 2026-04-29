// Problem: Tenzing and Tsondu
// Link to the problem: https://codeforces.com/contest/1842/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        x += z;
    }
    for (ll i = 0; i < m; i++)
    {
        ll z;
        cin >> z;
        y += z;
    }
    if (x > y)
    {
        cout << "Tsondu" << endl;
    }
    else if (x < y)
    {
        cout << "Tenzing" << endl;
    }
    else
    {
        cout << "Draw" << endl;
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