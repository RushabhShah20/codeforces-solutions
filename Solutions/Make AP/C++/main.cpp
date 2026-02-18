// Problem: Make AP
// Link to the problem: https://codeforces.com/contest/1624/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    bool ans = false;
    const ll x = 2 * b - c, y = (a + c) / 2, z = 2 * b - a;
    if ((x / a > 0 && x % a == 0) || (y / b > 0 && y % b == 0 && (c - a) % 2 == 0) || (z / c > 0 && z % c == 0))
    {
        ans = true;
    }
    if (ans == true)
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