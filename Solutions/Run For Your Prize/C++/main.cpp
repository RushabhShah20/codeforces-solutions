// Problem: Run For Your Prize
// Link to the problem: https://codeforces.com/contest/938/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ans = max(ans, min(x - 1, 1000000 - x));
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