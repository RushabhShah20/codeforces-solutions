// Problem: Nicholas and Permutation
// Link to the problem: https://codeforces.com/contest/676/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = 0, y = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z == 1)
        {
            x = i;
        }
        if (z == n)
        {
            y = i;
        }
    }
    if (x != 0 && y != n - 1)
    {
        cout << max({x, y, n - 1 - x, n - 1 - y}) << endl;
    }
    else
    {
        cout << n - 1 << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}