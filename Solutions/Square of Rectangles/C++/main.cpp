// Problem: Square of Rectangles
// Link to the problem: https://codeforces.com/contest/2120/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    if ((a1 == a2 && a2 == a3 && b1 + b2 + b3 == a1) || (b1 == b2 && b2 == b3 && a1 + a2 + a3 == b1))
    {
        cout << "YES" << endl;
        return;
    }
    if ((a2 == a3 && a1 + a2 == b1 && b2 + b3 == b1) || (b2 == b3 && b1 + b2 == a1 && a2 + a3 == a1))
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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