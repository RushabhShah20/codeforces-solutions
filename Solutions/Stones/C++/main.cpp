// Problem: Stones
// Link to the problem: https://codeforces.com/contest/1236/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll ans = 0;
    const ll x = min(c / 2, b);
    ans += 3 * x;
    b -= x;
    const ll y = min(b / 2, a);
    ans += 3 * y;
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