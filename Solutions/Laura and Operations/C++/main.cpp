// Problem: Laura and Operations
// Link to the problem: https://codeforces.com/contest/1900/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    a &= 1;
    b &= 1;
    c &= 1;
    if (a == b && b == c)
    {
        cout << "1 1 1" << endl;
    }
    else if (a == b)
    {
        cout << "0 0 1" << endl;
    }
    else if (a == c)
    {
        cout << "0 1 0" << endl;
    }
    else if (b == c)
    {
        cout << "1 0 0" << endl;
    }
    else
    {
        cout << "0 0 0" << endl;
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