// Problem: Tricky Sum
// Link to the problem: https://codeforces.com/contest/598/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll power(const ll b, const ll e)
{
    if (e <= 1)
    {
        return b;
    }
    return b * power(b, e - 1);
}

void solve()
{
    ll n;
    cin >> n;
    const ll ans = (n * (n + 1)) / 2 - 2 * (power(2, __bit_width(n)) - 1);
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