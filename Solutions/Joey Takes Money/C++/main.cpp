// Problem: Joey Takes Money
// Link to the problem: https://codeforces.com/contest/1731/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 2022;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ans *= x;
    }
    ans += 2022 * (n - 1);
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