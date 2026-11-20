// Problem: Mister B and Angle in Polygon
// Link to the problem: https://codeforces.com/contest/820/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    long double n, k;
    cin >> n >> k;
    long double a = 3, b = 1000000000000000000;
    for (ll i = 3; i <= n; i++)
    {
        const long double c = 180.0 / n * (i - 2), d = abs(k - c);
        if (d < b)
        {
            b = d;
            a = i;
        }
    }
    const ll x = 2, y = 1, z = a;
    cout << x << " " << y << " " << z << endl;
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