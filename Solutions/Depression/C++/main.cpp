// Problem: Depression
// Link to the problem: https://codeforces.com/contest/80/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll hh = stoll(s.substr(0, 2)), mm = stoll(s.substr(3, 2));
    const long double y = 360 * (long double)mm / 60, x = 360 * (long double)(hh >= 12 ? hh - 12 : hh) / 12 + (30 * ((long double)mm / 60));
    cout << fixed << setprecision(10) << x << " " << y << endl;
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