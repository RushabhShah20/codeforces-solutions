// Problem: Grass Field
// Link to the problem: https://codeforces.com/contest/1701/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    ll x = 0;
    if (a1)
    {
        x++;
    }
    if (a2)
    {
        x++;
    }
    if (a3)
    {
        x++;
    }
    if (a4)
    {
        x++;
    }
    if (x == 0)
    {
        cout << 0 << endl;
    }
    else if (x == 1 || x == 2 || x == 3)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
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