// Problem: IQ Test
// Link to the problem: https://codeforces.com/contest/328/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    const ll x = a2 - a1, y = a3 - a2, z = a4 - a3;
    if (x == y && y == z)
    {
        cout << a4 + x << endl;
        return;
    }
    if (a2 * a2 == a1 * a3 && a2 * a4 == a3 * a3)
    {
        const ll ans = a4 * a4 % a3 == 0 ? a4 * a4 / a3 : 42;
        cout << ans << endl;
        return;
    }
    cout << 42 << endl;
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