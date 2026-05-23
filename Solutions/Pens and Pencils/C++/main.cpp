// Problem: Pens and Pencils
// Link to the problem: https://codeforces.com/contest/1244/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    const ll x = (a + c - 1) / c, y = (b + d - 1) / d;
    if (x + y > k)
    {
        cout << -1 << endl;
        return;
    }
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