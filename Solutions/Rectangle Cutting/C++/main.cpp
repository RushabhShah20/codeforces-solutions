// Problem: Rectangle Cutting
// Link to the problem: https://codeforces.com/contest/1928/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a & 1 && b & 1)
    {
        cout << "No" << endl;
    }
    else if (a & 1 && !(b & 1))
    {
        const string ans = b / 2 == a ? "No" : "Yes";
        cout << ans << endl;
    }
    else if (!(a & 1) && b & 1)
    {
        const string ans = a / 2 == b ? "No" : "Yes";
        cout << ans << endl;
    }
    else
    {
        cout << "Yes" << endl;
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