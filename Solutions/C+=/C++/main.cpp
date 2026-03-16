// Problem: C+=
// Link to the problem: https://codeforces.com/contest/1368/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, n, ans = 0;
    cin >> a >> b >> n;
    while (a <= n && b <= n)
    {
        if (a >= b)
        {
            b += a;
        }
        else
        {
            a += b;
        }
        ans++;
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