// Problem: Marathon
// Link to the problem: https://codeforces.com/contest/1692/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<ll> e = {a, b, c, d};
    sort(e.begin(), e.end());
    if (e[0] == a)
    {
        cout << 3 << endl;
    }
    else if (e[1] == a)
    {
        cout << 2 << endl;
    }
    else if (e[2] == a)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}