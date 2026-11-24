// Problem: Help Vasilisa the Wise 2
// Link to the problem: https://codeforces.com/contest/143/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    const ll e = r1 + c1 - d2;
    if (e & 1)
    {
        cout << -1 << endl;
        return;
    }
    const ll a = e >> 1, b = r1 - a, c = c1 - a, d = d1 - a;
    const bool x = a >= 1 && a <= 9 && b >= 1 && b <= 9 && c >= 1 && c <= 9 && d >= 1 && d <= 9;
    const bool y = a != b && a != c && a != d && b != c && b != d && c != d;
    const bool z = c + d == r2 && b + d == c2 && b + c == d2;
    if (x && y && z)
    {
        cout << a << " " << b << endl;
        cout << c << " " << d << endl;
    }
    else
    {
        cout << -1 << endl;
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