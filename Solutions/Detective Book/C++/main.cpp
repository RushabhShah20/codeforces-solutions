// Problem: Detective Book
// Link to the problem: https://codeforces.com/contest/1140/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0, mx = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        mx = max(mx, x);
        ans += mx == i ? 1 : 0;
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