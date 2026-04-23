// Problem: Lazy Security Guard
// Link to the problem: https://codeforces.com/contest/859/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const ll m = sqrtl(n);
    ll ans = 4 * m;
    if (m * m != n)
    {
        const ll x = n - m * m;
        if (x <= m)
        {
            ans += 2;
        }
        else
        {
            ans += 4;
        }
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
    solve();
    return 0;
}