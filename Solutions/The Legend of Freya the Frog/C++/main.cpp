// Problem: The Legend of Freya the Frog
// Link to the problem: https://codeforces.com/contest/2009/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;
    const ll a = (x + k - 1) / k, b = (y + k - 1) / k;
    if (a > b)
    {
        cout << 2 * a - 1 << endl;
    }
    else
    {
        cout << 2 * b << endl;
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