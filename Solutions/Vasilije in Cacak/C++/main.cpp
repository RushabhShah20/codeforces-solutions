// Problem: Vasilije in Cacak
// Link to the problem: https://codeforces.com/contest/1878/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    const ll y = ((k * (k + 1)) / 2), z = (((n * (n + 1)) / 2) - (((n - k) * (n - k + 1)) / 2));
    if (y <= x && x <= z)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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