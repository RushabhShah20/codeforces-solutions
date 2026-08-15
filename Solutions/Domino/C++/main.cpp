// Problem: Domino
// Link to the problem: https://codeforces.com/contest/353/problem/A
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
        a += x & 1 && y & 1 ? 1 : 0;
        b += (x & 1) != (y & 1) ? 1 : 0;
        c += x;
        d += y;
    }
    const ll ans = !(c & 1) && !(d & 1) ? 0 : ((c & 1) && (d & 1) && b > 0 ? 1 : -1);
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