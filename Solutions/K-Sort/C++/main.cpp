// Problem: K-Sort
// Link to the problem: https://codeforces.com/contest/1987/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a = 0, b = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x >= y)
        {
            y = x;
        }
        else
        {
            const ll z = y - x;
            a += z;
            b = max(b, z);
        }
    }
    const ll ans = a + b;
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