// Problem: Minimum Integer
// Link to the problem: https://codeforces.com/contest/1101/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r, d;
    cin >> l >> r >> d;
    if (d < l)
    {
        cout << d << endl;
    }
    else
    {
        cout << d * (r / d + 1) << endl;
    }
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