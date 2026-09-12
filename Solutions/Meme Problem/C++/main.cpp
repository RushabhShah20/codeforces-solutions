// Problem: Meme Problem
// Link to the problem: https://codeforces.com/contest/1076/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    long double z;
    cin >> z;
    const long double a = (z * z) - (4 * z);
    if (a < 0)
    {
        cout << "N" << endl;
        return;
    }
    const long double x = (z + sqrtl(a)) / 2, y = (z - sqrtl(a)) / 2;
    cout << fixed << setprecision(15) << "Y " << x << " " << y << endl;
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