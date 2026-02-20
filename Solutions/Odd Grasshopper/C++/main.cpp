// Problem: Odd Grasshopper
// Link to the problem: https://codeforces.com/contest/1607/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, n;
    cin >> x >> n;
    ll ans;
    if (n % 4 == 1)
    {
        ans = -n;
    }
    else if (n % 4 == 2)
    {
        ans = 1;
    }
    else if (n % 4 == 3)
    {
        ans = n + 1;
    }
    else
    {
        ans = 0;
    }
    if (x % 2 == 0)
    {
        ans = x + ans;
    }
    else
    {
        ans = x - ans;
    }
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