// Problem: Maximum splitting
// Link to the problem: https://codeforces.com/contest/870/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll count(const ll n)
{
    if (n < 4)
    {
        return -1;
    }
    const ll m = n % 4;
    if (m == 0)
    {
        return n / 4;
    }
    if (m == 1)
    {
        if (n < 9)
        {
            return -1;
        }
        return (n - 9) / 4 + 1;
    }
    if (m == 2)
    {
        if (n < 6)
        {
            return -1;
        }
        return (n - 6) / 4 + 1;
    }
    if (n < 15)
    {
        return -1;
    }
    return (n - 15) / 4 + 2;
}

void solve()
{
    ll n;
    cin >> n;
    const ll ans = count(n);
    cout << ans << endl;
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