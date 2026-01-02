// Problem: Carnival Wheel
// Link to the problem: https://codeforces.com/contest/2180/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, a, b;
    cin >> l >> a >> b;
    ll ans = a;
    ll c = (a + b) % l;
    ans = max(ans, c);
    while (c != a)
    {
        c = ((c + b) % l);
        ans = max(ans, c);
    }
    cout << ans << endl;
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