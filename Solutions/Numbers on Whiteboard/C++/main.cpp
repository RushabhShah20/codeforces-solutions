// Problem: Numbers on Whiteboard
// Link to the problem: https://codeforces.com/contest/1430/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    cout << 2 << endl;
    ll x = n;
    for (ll y = n - 1; y >= 1; y--)
    {
        cout << x << " " << y << endl;
        x = (x + y + 1) / 2;
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