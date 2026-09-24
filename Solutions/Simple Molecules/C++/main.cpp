// Problem: Simple Molecules
// Link to the problem: https://codeforces.com/contest/344/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    const ll w = (a + b + c) >> 1, x = w - c, y = w - a, z = w - b;
    if (!((a + b + c) & 1) && x >= 0 && y >= 0 && z >= 0)
    {
        cout << x << " " << y << " " << z << endl;
    }
    else
    {
        cout << "Impossible" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}