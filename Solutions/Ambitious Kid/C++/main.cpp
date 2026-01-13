// Problem: Ambitious Kid
// Link to the problem: https://codeforces.com/contest/1866/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ans = min(ans, abs(x));
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}