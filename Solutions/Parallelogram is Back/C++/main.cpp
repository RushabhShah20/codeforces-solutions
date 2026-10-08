// Problem: Parallelogram is Back
// Link to the problem: https://codeforces.com/contest/749/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << 3 << endl;
    cout << x1 + x2 - x3 << " " << y1 + y2 - y3 << endl;
    cout << x2 + x3 - x1 << " " << y2 + y3 - y1 << endl;
    cout << x1 + x3 - x2 << " " << y1 + y3 - y2 << endl;
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