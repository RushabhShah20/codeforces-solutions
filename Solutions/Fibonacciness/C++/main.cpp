// Problem: Fibonacciness
// Link to the problem: https://codeforces.com/contest/2060/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;
    const vector<ll> p = {a1, a2, a1 + a2, a4, a5}, q = {a1, a2, a5 - a4, a4, a5};
    ll x = 0, y = 0;
    for (ll i = 0; i < 3; i++)
    {
        if (p[i + 2] == p[i] + p[i + 1])
        {
            x++;
        }
    }
    for (ll i = 0; i < 3; i++)
    {
        if (q[i + 2] == q[i] + q[i + 1])
        {
            y++;
        }
    }
    const ll ans = max(x, y);
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