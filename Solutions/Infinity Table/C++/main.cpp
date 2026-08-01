// Problem: Infinity Table
// Link to the problem: https://codeforces.com/contest/1560/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll m = sqrtl(n);
    if (m * m > n)
    {
        m--;
    }
    const ll k = n - m * m;
    if (k == 0)
    {
        cout << m << " " << 1 << endl;
    }
    else if (k <= m + 1)
    {
        cout << k << " " << m + 1 << endl;
    }
    else
    {
        cout << m + 1 << " " << 2 * m + 2 - k << endl;
    }
}

int main()
{
    // freopen("input.txt", "m", stdin);
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