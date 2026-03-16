// Problem: Two Elevators
// Link to the problem: https://codeforces.com/contest/1729/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a < c + abs(b - c))
    {
        cout << 1 << endl;
    }
    else if (a > c + abs(b - c))
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
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