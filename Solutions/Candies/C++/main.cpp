// Problem: Candies
// Link to the problem: https://codeforces.com/contest/1343/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 32; i >= 1; i--)
    {
        const ll x = (1LL << i) - 1;
        if (n % x == 0)
        {
            const ll ans = n / x;
            cout << ans << endl;
            return;
        }
    }
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