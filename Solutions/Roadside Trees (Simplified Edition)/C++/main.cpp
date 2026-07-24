// Problem: Roadside Trees (Simplified Edition)
// Link to the problem: https://codeforces.com/contest/265/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 2 * n - 1, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ans += abs(y - x);
        y = x;
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