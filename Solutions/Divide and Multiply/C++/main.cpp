// Problem: Divide and Multiply
// Link to the problem: https://codeforces.com/contest/1609/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0, y = 0, mx = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        while (z % 2 == 0)
        {
            x++;
            z /= 2;
        }
        y += z;
        mx = max(mx, z);
    }
    y -= mx;
    const ll ans = y + mx * (1LL << x);
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