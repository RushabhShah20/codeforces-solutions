// Problem: Chip Game
// Link to the problem: https://codeforces.com/contest/1719/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    const ll x = (n & 1 ? 1 : 2) + (m & 1 ? 1 : 2);
    if (x & 1)
    {
        cout << "Burenka" << endl;
    }
    else
    {
        cout << "Tonya" << endl;
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