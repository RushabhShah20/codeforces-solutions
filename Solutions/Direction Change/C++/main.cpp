// Problem: Direction Change
// Link to the problem: https://codeforces.com/contest/1668/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    const ll a = n - 1, b = m - 1;
    if (a == 0)
    {
        const ll ans = b > 1 ? -1 : b;
        cout << ans << endl;
        return;
    }
    if (b == 0)
    {
        const ll ans = a > 1 ? -1 : a;
        cout << ans << endl;
        return;
    }
    const ll ans = a + b + 2 * (abs(a - b) / 2);
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