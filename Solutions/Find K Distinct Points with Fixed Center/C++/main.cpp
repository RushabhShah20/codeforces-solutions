// Problem: Find K Distinct Points with Fixed Center
// Link to the problem: https://codeforces.com/contest/1998/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;
    if (k & 1)
    {
        cout << k * x << " " << k * y << endl;
        for (ll i = 1000000000; i > 1000000000 - (k - 1) / 2; i--)
        {
            cout << i << " " << i << endl;
            cout << -i << " " << -i << endl;
        }
    }
    else
    {
        cout << 500000000 + k * x << " " << 500000000 + k * y << endl;
        cout << -500000000 << " " << -500000000 << endl;
        for (ll i = 100000000; i > 100000000 - (k - 2) / 2; i--)
        {
            cout << i << " " << i << endl;
            cout << -i << " " << -i << endl;
        }
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