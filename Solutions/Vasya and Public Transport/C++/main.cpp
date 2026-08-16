// Problem: Vasya and Public Transport
// Link to the problem: https://codeforces.com/contest/355/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll c1, c2, c3, c4;
    cin >> c1 >> c2 >> c3 >> c4;
    ll n, m;
    cin >> n >> m;
    ll a = 0, b = 0;
    ;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a += min(c2, x * c1);
    }
    for (ll i = 0; i < m; i++)
    {
        ll y;
        cin >> y;
        b += min(c2, y * c1);
    }
    const ll c = n == 0 && m == 0 ? 0 : c4, d = min(a, c3) + min(b, c3), ans = min(c, d);
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