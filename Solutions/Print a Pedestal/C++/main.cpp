// Problem: Print a Pedestal (Codeforces logo?)
// Link to the problem: https://codeforces.com/contest/1690/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const ll ans = n / 3, x = n % 3;
    if (x == 2)
    {
        cout << (ans + 1) << " " << (ans + 2) << " " << (ans - 1) << endl;
    }
    else if (x == 1)
    {
        cout << (ans) << " " << (ans + 2) << " " << (ans - 1) << endl;
    }
    else
    {
        cout << (ans) << " " << (ans + 1) << " " << (ans - 1) << endl;
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