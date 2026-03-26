// Problem: Mathematical Addition
// Link to the problem: https://codeforces.com/contest/1584/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll u, v;
    cin >> u >> v;
    const ll g = __gcd(u * u, v * v), x = -1 * u * u / g, y = v * v / g;
    cout << x << " " << y << endl;
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