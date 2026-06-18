// Problem: Garden
// Link to the problem: https://codeforces.com/contest/915/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = k;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (k % x == 0)
        {
            ans = min(ans, k / x);
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
    solve();
    return 0;
}