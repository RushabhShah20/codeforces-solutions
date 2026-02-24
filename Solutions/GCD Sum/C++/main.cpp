// Problem: GCD Sum
// Link to the problem: https://codeforces.com/contest/1498/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = n;
    for (ll i = n; i <= n + 10; i++)
    {
        ll x = i, y = 0;
        while (x > 0)
        {
            y += (x % 10);
            x /= 10;
        }
        if (__gcd(i, y) > 1)
        {
            ans = i;
            break;
        }
    }
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