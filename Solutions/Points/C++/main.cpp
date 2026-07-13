// Problem: Points
// Link to the problem: https://codeforces.com/contest/76/problem/E
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a = 0, b = 0, c = 0, d = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        a += x;
        b += y;
        c += x * x;
        d += y * y;
    }
    const ll ans = n * c - a * a + n * d - b * b;
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