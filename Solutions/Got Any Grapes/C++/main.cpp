// Problem: Got Any Grapes?
// Link to the problem: https://codeforces.com/contest/1114/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    if (a < x)
    {
        cout << "NO" << endl;
        return;
    }
    a -= x;
    if (a + b < y)
    {
        cout << "NO" << endl;
        return;
    }
    if (a + b - y + c < z)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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