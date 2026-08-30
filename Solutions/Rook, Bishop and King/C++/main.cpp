// Problem: Rook, Bishop and King
// Link to the problem: https://codeforces.com/contest/370/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    const ll a = x1 == x2 || y1 == y2 ? 1 : 2, b = ((x1 + y1 & 1) == (x2 + y2 & 1)) ? (abs(x1 - x2) == abs(y1 - y2) ? 1 : 2) : 0, c = max(abs(x2 - x1), abs(y2 - y1));
    cout << a << " " << b << " " << c << endl;
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